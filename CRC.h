#pragma once

#include "toolkit.h"

class toolkit::CRC {
public:
	// constructors

	CRC( std::string init ) {
		this->stringData = init;
	}

	~CRC() {
		// delete
	}

	// operators

	void operator = ( std::string init ) {
		this->stringData = init;
	}

	// members

	uint32_t    get();
	std::string getstring();
private:
	std::string stringData;
	// boolean voidInit;

	boost::crc_32_type crc32;
};