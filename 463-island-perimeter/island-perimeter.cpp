class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int r = grid.size();
        int c = grid[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j < c; j++){
                if(grid[i][j] == 1){
                    if (i == 0 || grid[i - 1][j] == 0) ans++; // up cell or above water
                    if (i == r - 1 || grid[i + 1][j] == 0) ans++; // down cell or below water
                    if (j == 0 || grid[i][j - 1] == 0) ans++; // left cell or left me water
                    if (j == c - 1 || grid[i][j + 1] == 0) ans++; // right cell or right me water
                }
            }
        }
        return ans;
    }
};