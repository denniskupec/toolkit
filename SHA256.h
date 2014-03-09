#pragma once

#include "toolkit.h"
#include "all.h"

#include <base64.h>

class toolkit::SHA256 {
public:
	SHA256( std::string init ) {
		stringData = init;
	}

	std::string get() {
		std::string digest;

		CryptoPP::SHA256 hash;

		CryptoPP::StringSource foo( stringData, true,
		new CryptoPP::HashFilter(hash,
			new CryptoPP::HexEncoder (
				new CryptoPP::StringSink(digest))));

		return( digest );
	}
private:
	std::string stringData;
};