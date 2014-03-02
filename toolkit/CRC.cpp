#include "CRC.h"

/*
 * Get checksum of CRC object.
 */

uint32_t toolkit::CRC::get() {
	crc32.process_bytes( stringData.data(), stringData.length() );

	if( stringData.data() == nullptr ) {
		return( 0xFFFFFFFF );
	}

	return( crc32.checksum() );
}

/*
 * Get string data of CRC object.
 */

std::string toolkit::CRC::getstring() {
	return( stringData );
}