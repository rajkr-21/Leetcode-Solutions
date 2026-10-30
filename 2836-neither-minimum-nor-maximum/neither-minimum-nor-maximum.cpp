class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        vector<int> ans = {nums[0], nums[1], nums[2]};
        sort(ans.begin(), ans.end());
        return ans[1];
    }
};