class Solution {
public:
    int firstUniqChar(string s) {
    vector<int> count(26, 0);
    int n = s.length();
    // First pass: count frequencies of each character
    for (char c : s) {
        count[c - 'a']++;
    }
    
    // Second pass: find the first character with a frequency of 1
    for (int i = 0; i < n; i++) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
	}
};