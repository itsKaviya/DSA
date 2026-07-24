class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<pair<int, int>, int>> que;
        int fresh = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 2){
                   que.push({{i,j},0});
                   visited[i][j] = true;
                }else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int ans = 0, rotten = 0;
        while(!que.empty()){
            int i = que.front().first.first;
            int j = que.front().first.second;
            int time = que.front().second;

            que.pop();

            ans = max(ans, time);
            if(i-1 >= 0 && !visited[i-1][j] && grid[i-1][j] == 1 ) {
                que.push({{i-1, j}, time+1});
                visited[i-1][j] = true;
                rotten++;
            }
            
            if(i+1 < m && !visited[i+1][j] && grid[i+1][j] == 1 ) {
                que.push({{i+1, j}, time+1});
                visited[i+1][j] = true;
                rotten++;
            }
            
            if(j+1 < n && !visited[i][j+1] && grid[i][j+1] == 1 ) {
                que.push({{i, j+1}, time+1});
                visited[i][j+1] = true;
                rotten++;
            }
            
            if(j-1 >= 0 && !visited[i][j-1] && grid[i][j-1] == 1 ) {
                que.push({{i, j-1}, time+1});
                visited[i][j-1] = true;
                rotten++;
            }
        }

        return (rotten == fresh)? ans : -1;
    }
};