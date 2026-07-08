class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Tsum = (n*(n+1))/2; //Total Sum
        return  Tsum - accumulate(nums.begin(),nums.end(),0); //Tsum - OriginalSum
        
    }
}; 

