#pragma once

#include "toolkit.h"
#include "all.h"

class toolkit::SHA1 {
public:
	SHA1( std::string init ) {
		stringData = init;
	}

	std::string get() {
		CryptoPP::SHA1 sha1;
		std::string hash = "";
		CryptoPP::StringSource( stringData, true, new CryptoPP::HashFilter( sha1, new CryptoPP::HexEncoder( new CryptoPP::StringSink( hash ) ) ) );

		return( hash );
	}
private:
	std::string stringData;
};