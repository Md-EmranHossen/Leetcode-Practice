class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       long long int sum = INT_MIN;
        long long int max_subarray_sum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            sum = max((long long)nums[i],sum+nums[i]);
            max_subarray_sum = max( max_subarray_sum,sum);
        }
        return  max_subarray_sum;
    }
};