#include "all.h"
#include "toolkit.h"

class toolkit::BASE64 {
public:
	BASE64( std::string init ) {
		stringData = init;
	}

	std::string encode() {
		std::string encoded;
		CryptoPP::StringSource( stringData, true, new CryptoPP::Base64Encoder( new CryptoPP::StringSink( encoded ), false ) );

		base64Data = base64Data;

		return( encoded );
	}

	std::string decode() {
		std::string decoded;
		CryptoPP::StringSource( base64Data, true, new CryptoPP::Base64Decoder( new CryptoPP::StringSink( decoded ) ) );

		stringData = decoded;

		return( decoded );
	}
private:
	std::string stringData;
	std::string base64Data;
};