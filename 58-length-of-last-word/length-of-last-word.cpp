class Solution {
public:
    int lengthOfLastWord(string s) {
        // Emran
        stringstream str(s);
        string word;
        string ans;
        while(str >> word){
            ans = word;
        }
        return ans.size();
    }
};