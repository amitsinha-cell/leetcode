
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        string sum = "";
        int i = 1, a_digit, b_digit, diff;

        if (a.length() > b.length()) {
            diff = a.length() - b.length();
            b = string(diff, '0') + b;
        }
        else if (b.length() > a.length()) {
            diff = b.length() - a.length();
            a = string(diff, '0') + a;
        }

        do {
            a_digit = a[a.length() - i] - '0';
            b_digit = b[b.length() - i] - '0';

            if (a_digit + b_digit + (carry - '0') == 3) {
                carry = '1';
                sum = '1' + sum;
            }
            else if (a_digit + b_digit + (carry - '0') == 2) {
                carry = '1';
                sum = '0' + sum;
            }
            else if (a_digit + b_digit + (carry - '0') == 1) {
                carry = '0';
                sum = '1' + sum;
            }
            else if (a_digit + b_digit + (carry - '0') == 0) {
                sum = '0' + sum;
                carry = '0';
            }
            else if (carry && i > a.length() && i > b.length()) {
                sum = '1' + sum;
                carry = '0';
            }

            i++;

        } while (i <= a.length() || i <= b.length());
        
        if (carry == '1'){
            sum = '1' + sum;
        }

        return sum;
    }
};
