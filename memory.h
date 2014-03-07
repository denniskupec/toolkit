#pragma once

#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <winternl.h>
#include <TlHelp32.h>

#include "toolkit.h"

typedef struct sec_s {
	DWORD dwAddress;
	DWORD dwSize;
	DWORD dwEnd;
	DWORD dwOffset;
} sec_t;

class toolkit::memory {
public:
	class PE;

	toolkit::memory( DWORD dwStart, DWORD dwEnd ) {
		this->start = dwStart;
		this->end	= dwEnd;
	}

	toolkit::memory( HMODULE hStart ) {
		toolkit::memory::PE pe( hStart );

		DWORD dwStart = ( DWORD ) hStart;
		DWORD dwEnd   = ( pe.image() + pe.getNTHeaders()->OptionalHeader.SizeOfImage );

		this->start = dwStart;
		this->end	= dwEnd;
	}

	toolkit::memory( DWORD dwStart ) {
		toolkit::memory::PE pe( ( HMODULE ) dwStart );

		DWORD dwEnd   = ( pe.image() + pe.getNTHeaders()->OptionalHeader.SizeOfImage );

		this->start = dwStart;
		this->end	= dwEnd;
	}

	DWORD findFirstOpCode( DWORD dwOP, DWORD dwOffset = 0 ) {
		for( DWORD iterator; iterator <= end; iterator++ ) {
			BYTE *OPC = ( BYTE * )( this->start + iterator );

			if( *OPC == dwOP ) {
				DWORD result = ( this->start + iterator );
				result += dwOffset;

				return( result );
			}
		}
	}
private:
	DWORD start, end;
};

class toolkit::memory::PE {
public:
	toolkit::memory::PE( HMODULE hModule ) {
		this->module = hModule;
	}

	IMAGE_DOS_HEADER *getDOSHeader() {
		return( ( IMAGE_DOS_HEADER * ) this->module );
	}

	IMAGE_NT_HEADERS *getNTHeaders() {
		IMAGE_DOS_HEADER *DOS = this->getDOSHeader();

		DWORD dwNTHeaders = ( DWORD ) DOS;
		dwNTHeaders += DOS->e_lfanew;

		return( ( IMAGE_NT_HEADERS * ) dwNTHeaders );
	}

	IMAGE_OPTIONAL_HEADER *getOptionalHeader() {
		IMAGE_OPTIONAL_HEADER *header = ( IMAGE_OPTIONAL_HEADER * )( ( PBYTE ) &this->getNTHeaders()->OptionalHeader );

		return( header );
	}

	DWORD size() {
		IMAGE_NT_HEADERS *nt = this->getNTHeaders();

		size_t offset = ( size_t ) &reinterpret_cast< const volatile char & >( ( ( ( IMAGE_NT_HEADERS * ) 0 )->OptionalHeader ) );
		DWORD  dwSize = offset;
		
		dwSize += ( nt->FileHeader.SizeOfOptionalHeader );
		dwSize += ( nt->FileHeader.NumberOfSections * 0x28 );

		return( dwSize );
	}

	DWORD getDOSOffset( WORD offset ) {
		return( ( ( DWORD ) this->getDOSHeader() + offset ) );
	}

	void erase() {
		DWORD dwOld;

		VirtualProtect( this->getDOSHeader(), this->size(), PAGE_EXECUTE_READWRITE, &dwOld );
		RtlSecureZeroMemory( this->getDOSHeader(), this->size() );
		VirtualProtect( this->getDOSHeader(), this->size(), dwOld, NULL );
	}

	DWORD image() {
		return( this->getNTHeaders()->OptionalHeader.ImageBase );
	}

	sec_t getSection( std::string name ) {
		sec_t section;

		section.dwAddress	= 0xBAD;
		section.dwSize		= 0xBAD;
		section.dwOffset	= 0xBAD;
		section.dwEnd		= 0xBAD;

		PIMAGE_SECTION_HEADER hdr = ( PIMAGE_SECTION_HEADER )( this->getNTHeaders() + 1 );

		for( int i = 0; i < this->getNTHeaders()->FileHeader.NumberOfSections; i++, hdr++ ) {
			DWORD dwSection = this->image();
			dwSection += hdr->VirtualAddress;

			if( !strcmp( ( const char * ) hdr->Name, name.c_str() ) ) {
				section.dwAddress	= this->image() + hdr->VirtualAddress;
				section.dwSize		= hdr->SizeOfRawData;
				section.dwOffset	= hdr->VirtualAddress;
				section.dwEnd		= section.dwAddress + section.dwSize;

				return( section );
			}
		}

		return( section );
	}

	DWORD entrypoint() {
		return( ( DWORD ) this->image() + this->getNTHeaders()->OptionalHeader.AddressOfEntryPoint );
	}

	PEB *peb() {
		PEB *pPEB;

		__asm {
			mov eax, fs:[ 0x30 ];
			mov pPEB, eax;
		}

		this->pPEB = pPEB;

		return( pPEB );
	}
private:
	HMODULE module;

	PEB *pPEB;
};