class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int count = 1;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                continue;

            count++;

            if (count == 3)
                return nums[i];
        }

        return nums[0];
    }
};