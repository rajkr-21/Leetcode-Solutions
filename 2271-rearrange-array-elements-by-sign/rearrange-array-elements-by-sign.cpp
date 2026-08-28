class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int i = 0;
        int j = 1;
        for(int x : nums){
            if(x>0){
                arr[i] = x;
                i += 2;
            }
            else{
                arr[j] = x;
                j += 2;
            }
        }
        return arr;
    }
};