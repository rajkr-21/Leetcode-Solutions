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
        if(k==0) return;
        reverse(nums.begin(), nums.end()); //entire array
        reverse(nums.begin(), nums.begin() +k); //first k elements
        reverse(nums.begin() + k, nums.end()); //n-k elements
    }
};
