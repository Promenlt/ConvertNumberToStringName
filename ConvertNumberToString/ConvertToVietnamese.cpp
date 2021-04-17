#include "ConvertToVietnamese.h"

ConvertToVietnamese::ConvertToVietnamese() {
}
ConvertToVietnamese::~ConvertToVietnamese() {
}
string ConvertToVietnamese::language() {
    return "Vietnamese";
}
string ConvertToVietnamese::convertNumberToString(long number) {
    if (number < 10) {
        return kDonvi[number];
    }
    else if (number < 20) {
        if (number != 15) {
            return "muoi " + ((number % 10 != 0) ? convertNumberToString(number % 10) : "");
        }
        else return "muoi lam";   
    }
    else if (number < 100) {
        if (number % 10 != 5) {
            return convertNumberToString(number/10) + " muoi " +((number % 10 != 0) ? convertNumberToString(number % 10) : "");
        }
        else  return convertNumberToString(number / 10) + " muoi lam";
    }
    else if (number < 1000) {
        if (number % 100 < 10) {
            return convertNumberToString(number / 100) + " tram " + ((number % 100 != 0) ? "linh " + convertNumberToString(number % 100) : "");
        }
        else return convertNumberToString(number / 100) + " tram " + convertNumberToString(number % 100);
    }
    else if (number < 1000000) {
        if (number % 1000 < 100) {
            return convertNumberToString(number / 1000) + " nghin" + ((number % 1000 != 0) ? " khong tram" + ((number % 1000 < 10)?" linh " + convertNumberToString(number % 1000): convertNumberToString(number % 1000)) : "");
        }
        return convertNumberToString(number / 1000) + " nghin " + convertNumberToString(number % 1000);
    }
    else if (number < 1000000000) {
        if (number % 1000000 < 100000) {
            return convertNumberToString(number / 1000000) + " trieu" + ((number % 1000000 != 0) ? " khong tram" + ((number % 1000000 < 10000) ? " linh " + convertNumberToString(number % 1000000) : convertNumberToString(number % 1000000)) : "");
        }
        return convertNumberToString(number / 1000000) + " trieu" + convertNumberToString(number % 1000000);
    }
    else if (number < 1000000000000) {
        if (number % 1000000000 < 100000000) {
            return convertNumberToString(number / 1000000000) + " ty" + ((number % 1000000000 != 0) ? " khong tram" + ((number % 1000000000 < 10000000) ? " linh " + convertNumberToString(number % 1000000000) : convertNumberToString(number % 1000000000)) : "");
        }
        return convertNumberToString(number / 1000000000) + " ty" + convertNumberToString(number % 1000000000);
    }
    return "error";
}
string ConvertToVietnamese::convertNegativeNumberToString(long number) {
    if (number < 0) {
        return "am " + convertNumberToString(abs(number));
    }
    return "error";
}