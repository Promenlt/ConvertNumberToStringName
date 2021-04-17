#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class ModelConvert {
	public:
		ModelConvert() {};
		virtual ~ModelConvert() {};
		virtual string language() { return ""; };
		virtual string convertNumberToString(long number) { return ""; };
		virtual string convertNegativeNumberToString(long number) { return ""; };
};
