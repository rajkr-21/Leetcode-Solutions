class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n= nums.size();
        int res = 0;
        sort(nums.begin(),nums.end());
        for (int i=0; i<n; i++){
            res = nums[n-1] + nums[n-2] -nums[0];
        }
        return res;
    }
};