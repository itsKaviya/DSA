class Solution {
public:
    int uniquePaths(int m, int n) {
        // ways to reach the target : arr[m][n] = arr[m][n-1] + arr[m-1][n]

        // memosiation : declaring the number of ways visisting a grid;
        vector<vector<int>> dp(m, vector<int>(n,0));
        for(int i= 0;i<m;i++){
            for(int j=0; j<n; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }

        return dp[m-1][n-1];
    }
};