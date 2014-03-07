#pragma once

#include <Windows.h>

#include "toolkit.h"

class toolkit::sigscan {
public:
	sigscan( DWORD dwInit ) {
		dwStart = dwInit;
	}

	sigscan( DWORD dwInit, const char *sig, char *mask ) { // unsafe
		pSig   = sig;
		pMask  = mask;

		dwStart = dwInit;
	}

	sigscan( DWORD dwInit, const char *sig, char *mask, DWORD dwSizeInit ) {
		pSig    = sig;
		pMask   = mask;

		dwStart = dwInit;
		dwSize  = dwSizeInit;
	}

	// scan

	DWORD get() {
		// sigscan( DWORD dwInit, const char *sig, const char *mask, DWORD dwSizeInit );

		DWORD dwResult = internalScan( dwStart, dwSize, ( PBYTE ) pSig, pMask );

		return( dwResult );
	}

	DWORD get( const char *sig, char *mask ) {
		// sigscan( DWORD dwInit, const char *sig, char *mask );

		if( dwSize == 0 ) {
			dwSize = 0xDEADBEEF; // UNSAFE
		}

		DWORD dwResult = internalScan( dwStart, dwSize, ( PBYTE ) pSig, pMask );

		return( dwResult );
	}

	DWORD get( DWORD dwInit, const char *sig, char *mask, DWORD dwSizeInit ) {
		// sigscan( DWORD dwInit );

		pSig    = sig;
		pMask   = mask;

		dwStart = dwInit;
		dwSize  = dwSizeInit;

		DWORD dwResult = internalScan( dwStart, dwSize, ( PBYTE ) pSig, pMask );

		return( dwResult );
	}
private:
	bool dataCompare(const BYTE* pData, const BYTE* bMask, const char* szMask)
	{
		for( ; *szMask; ++szMask, ++pData, ++bMask )
		{
			if( *szMask == 'x' && *pData != *bMask )
			{
				return( false );
			}
		}
		return( ( *szMask ) == 0 );
	}

	DWORD internalScan( DWORD dwAddress, DWORD dwSize, BYTE* pbMask, char* szMask )
	{
		for( DWORD i = 0; i < dwSize; i++ )
		{
			if( dataCompare( ( PBYTE )( dwAddress + i ), pbMask, szMask ) )
			{
				return( ( DWORD ) (dwAddress + i ) );
			}
		}
		return 0;
	}

	DWORD dwStart;

	const char *pSig;
	char *pMask;

	DWORD dwSize;
};