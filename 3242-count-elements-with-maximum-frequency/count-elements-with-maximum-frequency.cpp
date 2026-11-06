class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> m;

        for(int i=0 ;i<n; i++){
            m[nums[i]]++;
        }

        int maxfreq=0;

        for(auto x : m){
            maxfreq = max(maxfreq,x.second);
        }

        int res = 0;
        for(auto x :m){
            if(x.second == maxfreq){
                res += x.second;
            }
        }

        return res;
    }
};