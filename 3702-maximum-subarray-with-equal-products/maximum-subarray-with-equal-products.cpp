class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0;

        for (int i = 0; i < n; ++i) {
            int prod = 1;
            int g = 0;
            int l = 1;

            for (int j = i; j < n; ++j) {
                prod *= nums[j];
                if (prod > 25200) break; // Exceeds max possible lcm * gcd

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (prod == l * g) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }
};
