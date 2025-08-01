class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i]>= '0' && s[i] <= '9') ) {
                ans += s[i];
            }
        }
        string temp = ans;
        reverse(temp.begin(), temp.end());
        if (temp == ans) {
            return true;
        }
        else {
            return false;
        }
    }
};