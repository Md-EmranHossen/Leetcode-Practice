class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
            int x = nums[i];
            mp[x]++;
        }
        nums.clear();
        for (auto x : st) {
            if (mp[x] > 1) {
                nums.push_back(x);
            }
            nums.push_back(x);
        }
        return nums.size();
    }
};