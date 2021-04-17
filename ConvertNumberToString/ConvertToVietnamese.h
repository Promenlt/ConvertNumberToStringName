#pragma once
#include "ModelConvert.h"
class ConvertToVietnamese : public ModelConvert {

public:
	ConvertToVietnamese();
	~ConvertToVietnamese();

	string language();
	string convertNumberToString(long number);
	string convertNegativeNumberToString(long number);
private:
	const string kDonvi[10] = { "khong","mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };
};