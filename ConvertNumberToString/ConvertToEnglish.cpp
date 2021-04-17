#include "ConvertToEnglish.h"

ConvertToEnglish::ConvertToEnglish() {
}
ConvertToEnglish::~ConvertToEnglish() {
}
string ConvertToEnglish::language() {
    return "English";
}
string ConvertToEnglish::convertNumberToString(long number) {
    if (number < 10) {
        return kDigit[number];
    }
    else if (number < 20) {
        return kTeen[number - 10];
    }
    else if (number < 100) {
        return kTen[number / 10] + ((number % 10 != 0) ? "-" + convertNumberToString(number % 10) : "");
    }
    else if (number < 1000) {
        return convertNumberToString(number / 100) + " hundred" + ((number % 100 != 0) ? " " + convertNumberToString(number % 100) : "");
    }
    else if (number < 1000000) {
        return convertNumberToString(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + convertNumberToString(number % 1000) : "");
    }
    else if (number < 1000000000) {
        return convertNumberToString(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + convertNumberToString(number % 1000000) : "");
    }
    else if (number < 1000000000000) {
        return convertNumberToString(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + convertNumberToString(number % 1000000000) : "");
    }
    return "error";
}
string ConvertToEnglish::convertNegativeNumberToString(long number) {
    if (number < 0) {
        return "negative " + convertNumberToString(abs(number));
    }
    return "error";
}