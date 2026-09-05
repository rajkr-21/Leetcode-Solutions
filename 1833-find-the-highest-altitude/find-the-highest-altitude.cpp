class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int n = gain.size(); int ans = 0;
        vector<int> altitudes(n+1);
        
        for (int i = 0; i < n; ++i) {
            altitudes[i + 1] = altitudes[i] + gain[i];
            ans = max(ans, altitudes[i+1]);
        }
        return ans;
    }
};
