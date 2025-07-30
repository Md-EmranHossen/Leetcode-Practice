class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0 ) return false;
        int ans = 0;
        for (int k = 0; k < 32; k++) {
            if((n>> k) & 1){
                ans++;
            }
        }
        if(ans == 1) return true;
        else return false;
    }
};