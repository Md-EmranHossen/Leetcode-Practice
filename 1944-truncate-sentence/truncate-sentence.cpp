class Solution {
public:
    string truncateSentence(string s, int k) {
    
    stringstream ss(s);
   
    string word;
    string ans;
    int cnt = 1;
    while (ss >> word) {
        if(cnt <= k){
            ans += word;
            cnt++;
            if(cnt <= k){
                ans += " ";
            }
        }
    }
    return ans;
    }
};