class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        // vector<int> temp(n);
        int n = nums.size();
        k = k % n; 
        // for (int i = 0; i < n; i++) {
        //     temp[(i + k) % n] = nums[i];
        // }
        // nums = temp;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() +k);
        reverse(nums.begin() + k, nums.end());
    }
};
