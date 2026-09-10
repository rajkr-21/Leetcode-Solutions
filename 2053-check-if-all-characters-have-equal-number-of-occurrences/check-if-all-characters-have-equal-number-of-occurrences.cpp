class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.size();
        map<int, int> m;

        for(int i =0; i<n; i++) m[s[i]]++;

        int l = m[s[n-1]];  //last char ka freq

        for(auto it : m){
            if(it.second != l){
                return false;
            }
        }
        return true;
    }
};