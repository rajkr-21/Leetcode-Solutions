class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n); 
        int k = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                temp[k++] = nums[i];
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                temp[k++] = nums[i];
            }
        }
        
        return temp;
    }
};
