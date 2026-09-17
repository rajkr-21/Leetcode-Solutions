class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        for(int i=0; i<n;i++){
            m[arr[i]]++;
        }
        int ans =-1;
        for(auto x: m ){
            if( x.first == x.second ){
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};