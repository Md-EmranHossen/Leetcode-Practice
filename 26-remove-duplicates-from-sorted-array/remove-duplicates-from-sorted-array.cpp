class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Emran
        set<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        nums.clear();
        for(auto x : st){
            nums.push_back(x);
        }
        return st.size();
    }
};