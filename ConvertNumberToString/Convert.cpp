#include <vector>
#include "ConvertToEnglish.h"
#include "ConvertToVietnamese.h"

ModelConvert* english = new ConvertToEnglish();
ModelConvert* vietnamese = new ConvertToVietnamese();
static int choice;
vector<ModelConvert*> Language;
vector<string> convertNumber,convertNegativeNumber;

void language() {
    Language.push_back(english);
    Language.push_back(vietnamese);
}
string convertNumberToString(long number) {
    for (int i = 0; i < Language.size(); i++) {
        convertNumber.push_back(Language.at(i)->convertNumberToString(number));
    }
    string temp = convertNumber.at(choice - 1);
    convertNumber.clear();
    return temp;
}
string convertNegativeNumberToString(long number) {
    for (int i = 0; i < Language.size(); i++) {
        convertNegativeNumber.push_back(Language.at(i)->convertNegativeNumberToString(number));
    }
    string temp = convertNegativeNumber.at(choice - 1);
    convertNegativeNumber.clear();
    return temp;
}
int main()
{
    language();
    long input;
    cout << "Please enter a integer: ";
    bool check = scanf_s("%d", &input);
    if (check != 0) {
        for (int i = 1; i <= Language.size(); i++) {
            string temp = Language.at(i-1)->language();
            cout << "\n" << i << "." << temp;
        }
        cout << "\n" << "Please enter number to choice language that you want to convert: ";
        cin >> choice;
        if (input >= 0) {
            cout << "\n" << convertNumberToString(input) << endl;
        }
        else {
            cout << "\n" << convertNegativeNumberToString(input) << endl;
        }
    }
    else cout << "This is not a integer" << endl;
    return 0;
}