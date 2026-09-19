class Solution {
public:
    vector<int> intersection(std::vector<std::vector<int>>& nums) {
        vector<int> count(1001, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++){
            for (int j = 0; j < nums[i].size(); j++){
                count[nums[i][j]]++;
            }
        } 

        vector<int> result;
        for (int i = 1; i <= 1000; ++i) {
            if (count[i] == n) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
