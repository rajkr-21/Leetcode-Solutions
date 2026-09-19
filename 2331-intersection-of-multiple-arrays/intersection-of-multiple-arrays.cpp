class Solution {
public:
    vector<int> intersection(std::vector<std::vector<int>>& nums) {
        vector<int> count(1001, 0);
        
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums[i].size(); j++){
                count[nums[i][j]]++;
            }
        } 

        
        vector<int> result;
        int target = nums.size();
        
        for (int i = 1; i <= 1000; ++i) {
            if (count[i] == target) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
