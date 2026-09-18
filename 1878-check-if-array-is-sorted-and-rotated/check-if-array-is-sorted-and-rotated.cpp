class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n =nums.size();

        // Compare current element with the next element circularly
        for (int i =0;i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        
        // Valid if there is at most 1 drop in value
        return count <= 1;
    }
};
