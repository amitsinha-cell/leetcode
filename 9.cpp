class Solution {
public:
    bool isPalindrome(int x) {
        long long digit, reverse = 0, y = x;

        if (x < 0) {
            return false;
        }
        else {
            while (y != 0) {
                digit = y % 10;
                reverse = reverse * 10 + digit;
                y = int(y / 10);
            }
        }

        if (x == reverse) {
            return true;
        }
        else {
            return false;
        }
    }
};
