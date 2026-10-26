class Solution {
public:
    bool checkIfPangram(string sentence) {
        //store only unique char of the sentenc
        unordered_set<char> ans(sentence.begin(), sentence.end());
        
        return ans.size() == 26;
    }
};