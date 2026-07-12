class Solution {
public:
    int lengthOfLastWord(string s) {
        int m = 0;
        int i = s.length()-1;

        while(i >= 0 && s[i] ==' '){
            i--;
        }
        while(i >=0  && s[i] !=' '){
            m++;
            i--;
        }
        return m;
    }
};