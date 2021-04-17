#pragma once
#include "ModelConvert.h"
class ConvertToEnglish : public ModelConvert {

	public:
		ConvertToEnglish();
		~ConvertToEnglish();

		string language();
		string convertNumberToString(long number);
		string convertNegativeNumberToString(long number);
	private:
		const string kDigit[10] = { "zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
		const string kTeen[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen" };
		const string kTen[10] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
};