class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false;
        }

        long long int answer = 0;
        int orginal = x;
        int i = 0;
       
       while (x != 0) { 
        int last_digit = x % 10;
        answer = answer * 10 + last_digit; 
        x /= 10; 
        }
       
        if (orginal == answer) {
            return true;
        }
        else return false;
    }
};