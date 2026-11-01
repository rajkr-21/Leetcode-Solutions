
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0, time = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) q.push({i,j});
                else if(grid[i][j] == 1) fresh++;
            }
        }

        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        // Multi source bfs
        while(!q.empty() && fresh > 0) {
            int s = q.size();
            while(s--) {
                auto [x,y] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++) {
                    int a = x + dx[k];
                    int b = y + dy[k];

                    if(a >= 0 && a < n && b >= 0 && b < m &&
                       grid[a][b] == 1) {

                        grid[a][b] = 2;
                        fresh--;
                        q.push({a,b});
                    }
                }
            }
            time++;
        }
        return fresh == 0 ? time : -1;
    }
};
