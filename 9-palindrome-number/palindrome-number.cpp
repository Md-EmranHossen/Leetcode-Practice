class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }

        long long int reverse = 0;
        int orginal = x;
        int i = 0;
        while (x > 0) {
            int rem = x % 10;
            reverse = reverse * 10 + rem;
            i++;
            x = x / 10;
        }
        if (orginal == reverse) {
            return true;
        }
        else return false;
    }
};