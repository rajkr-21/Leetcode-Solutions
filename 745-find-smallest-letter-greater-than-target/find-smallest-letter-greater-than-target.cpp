class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right= letters.size() -1;
        char ans = letters[0];
        while(left<=right){
            int mid =left + (right - left)/2;
            char c = letters[mid];
            if(c > target){
                ans = c;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};