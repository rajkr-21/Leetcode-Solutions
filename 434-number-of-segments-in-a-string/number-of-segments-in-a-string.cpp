class Solution {
public:
    int countSegments(string s) {
        int Count = 0;
        istringstream stringStream(s);

        string word;
        while (stringStream >> word) {
            Count++;
        }
      
        return Count;
    }
};
