class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int x) {
        int row = arr.size();

        if(row == 0)
            return false;

        int col = arr[0].size();

        int i = 0;
        int j = col - 1;

        while(i < row && j >= 0) {

            if(arr[i][j] == x) {
                return true;
            }
            else if(arr[i][j] > x) {
                j--;
            }
            else {
                i++;
            }
        }

        return false;
    }
};