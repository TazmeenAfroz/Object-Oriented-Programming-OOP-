#include <iostream>
#include <string>
using namespace std;

class romanType {
    private:
        string romanNum;
        int decimalNum;

    public:
        romanType(string roman = "") {
            romanNum = roman;
            decimalNum = convertToDecimal(romanNum);
        }

        int convertToDecimal(string roman) {
            int decimal = 0;

            for (int i = 0; i < roman.length(); i++) {
                if (roman[i] == 'M')
                    decimal += 1000;
                else if (roman[i] == 'D')
                    decimal += 500;
                else if (roman[i] == 'C') {
                    if (roman[i+1] == 'M') {
                        decimal += 900;
                        i++;
                    }
                    else if (roman[i+1] == 'D') {
                        decimal += 400;
                        i++;
                    }
                    else
                        decimal += 100;
                }
                else if (roman[i] == 'L')
                    decimal += 50;
                else if (roman[i] == 'X') {
                    if (roman[i+1] == 'C') {
                        decimal += 90;
                        i++;
                    }
                    else if (roman[i+1] == 'L') {
                        decimal += 40;
                        i++;
                    }
                    else
                        decimal += 10;
                }
                else if (roman[i] == 'V')
                    decimal += 5;
                else if (roman[i] == 'I') {
                    if (roman[i+1] == 'X') {
                        decimal += 9;
                        i++;
                    }
                    else if (roman[i+1] == 'V') {
                        decimal += 4;
                        i++;
                    }
                    else
                        decimal += 1;
                }
            }

            return decimal;
        }

        void printRoman() {
            cout << "Roman Numeral: " << romanNum << endl;
        }

        void printDecimal() {
            cout << "Decimal Numeral: " << decimalNum << endl;
        }
};

int main() {
    romanType r1("MCXIV");
    r1.printRoman();
    r1.printDecimal();

    romanType r2("CCCLIX");
    r2.printRoman();
    r2.printDecimal();

    romanType r3("MDCLXVI");
    r3.printRoman();
    r3.printDecimal();

    return 0;
}
