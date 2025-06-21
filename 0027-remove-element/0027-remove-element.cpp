class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int> v;
        for(auto num : nums){
           if(num != val){
            v.push_back(num);
           }
        }
        nums.clear();
        for(auto x : v){
            nums.push_back(x);
        }
        return  v.size();
    }
};