/**
 * 
 * Practical 2: Roman Numbers - Convert interger to roman numeral equivalent in the command line. Convert roman numeral to intger.
 */


#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {

    string roman[]{ "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
    string romanTen[]{ "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
    string romanHundred[]{ "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
    string romanThousand[]{ "M", "MM", "MMM" };

    string input;
    string pre;
    string num;
    string holder;
    string romanOut;

    bool checkPre = false;
    bool checkInput = false;
    bool stillGoing = false;

    int preLength = 0;
    int intOut = 0;
    int locCheck = 0;
    int intIn = 0;
//-----------------------------------------------------------------------------------------

    getline(cin, input);
    if (isalpha(input[0])) {
        for (int i = 0; i < input.length(); i++) {
            input[i] = toupper(input[i]);
        }
    }
    else {
        for (int i = 0; i < input.length(); ++i) {
            if (isdigit(input[i])) {
                num += input[i];
            }
            else if (isalpha(input[i])) {
                i = input.length();
            }
        }
    }
    while (!input.empty()) {

        romanOut = "";
        intOut = 0;
        int count = 0;
        checkInput = true;

        while (checkInput) {

            if (isalpha(input[0])) {
                if (input.length() - count > 4) {
                    preLength = 4;
                } else {
                    preLength = input.length() - count;
                }
                checkPre = true;

                while (checkPre) {
                    if (isalpha(input[0])) {
                        for (int i = 0; i < preLength; ++i) {
                            pre += input[i + count];
                        }
                        if (pre[0] == 'M' && locCheck != 1) {
                            for (int i = sizeof(romanThousand) / sizeof(string) - 1; i > -1; i--) {
                                if (romanThousand[i] == pre) {
                                    count += preLength;
                                    intOut += (i + 1) * 1000;
                                    locCheck = 1;
                                    checkPre = false;
                                }
                            }
                            pre = "";
                            preLength--;

                        } else if (pre[0] == 'C' || pre[0] == 'D' && locCheck != 2) {
                            for (int i = sizeof(romanHundred) / sizeof(string) - 1; i > -1; i--) {
                                if (romanHundred[i] == pre) {
                                    count += preLength;
                                    intOut += (i + 1) * 100;
                                    locCheck = 2;
                                    checkPre = false;
                                }
                            }
                            pre = "";
                            preLength--;

                        } else if (pre[0] == 'L' || pre[0] == 'X' && locCheck != 3) {
                            for (int i = sizeof(romanTen) / sizeof(string) - 1; i > -1; i--) {
                                if (romanTen[i] == pre) {
                                    count += preLength;
                                    intOut += (i + 1) * 10;
                                    locCheck = 3;
                                    checkPre = false;
                                }
                            }
                            pre = "";
                            preLength--;

                        } else if (pre[0] == 'I' || pre[0] == 'V') {
                            for (int i = sizeof(roman) / sizeof(string) - 1; i > -1; i--) {
                                if (roman[i] == pre) {
                                    count += preLength;
                                    intOut += (i + 1);
                                    checkInput = false;
                                    checkPre = false;
                                }
                            }
                            pre = "";
                            preLength--;

                        } else {
                            pre = "";
                            checkPre = false;
                            checkInput = false;
                        }
                    }
                }
            }
            //------------------------------------------------------------------------------------------
            else if (isdigit(input[0])) {

                stillGoing = true;
                while (stillGoing) {

                    int indexCount = 0;
                    holder = "";
                    intIn = 0; //reset

                    if (num.length() == 4) {
                        intIn = stoi(num);
                        romanOut += romanThousand[intIn/1000 - 1];
                        indexCount++;

                        for (int i = indexCount; i < num.length(); ++i) {
                            holder += num[i];
                        }
                        num = holder;

                    } else if (num.length() == 3) {
                        if (num[0] == '0') {
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }
                            num = holder;

                        } else {
                            intIn = stoi(num);
                            romanOut += romanHundred[intIn/100 - 1];
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }
                            num = holder;

                        }
                    } else if (num.length() == 2) {
                        if (num[0] == '0') {
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }
                            num = holder;

                        } else {
                            intIn = stoi(num);
                            romanOut += romanTen[intIn/10 - 1];
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }

                            num = holder;
                        }
                    } else if (num.length() == 1) {
                        if (num[0] == '0') {
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }
                            num = holder;
                            stillGoing = false;//final digit

                        } else {
                            intIn = stoi(num);
                            romanOut += roman[intIn - 1];
                            indexCount++;

                            for (int i = indexCount; i < num.length(); ++i) {
                                holder += num[i];
                            }

                            num = holder;
                            stillGoing = false;
                            checkInput = false;

                        }
                    }
                }

                checkInput = false;
                checkPre = false;
                num.clear();
            }
        }
        if (isdigit(input[0])) {
            cout << romanOut << endl;
        } else {
            cout << intOut << endl;
        }

        getline(cin, input);
        if (isalpha(input[0])) {
            for (int i = 0; i < input.length(); i++) {
                input[i] = toupper(input[i]);
            }
        }
        else {
            for (int i = 0; i < input.length(); ++i) {
                if (isdigit(input[i])) {
                    num += input[i];
                } else if (!isdigit(input[i])) {
                    i = input.length();
                }
            }
        }

        locCheck = 0;
    }
    return 0;
}
