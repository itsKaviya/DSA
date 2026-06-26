class Solution {
    public int uniquePaths(int m, int n) {
        // ways to reach the target : arr[m][n] = arr[m][n-1] + arr[m-1][n]

        // Memoizationjk : declaring the number of ways visisting a grid;
        int arr[][] = new int[m][n];
        for(int i= 0;i<m;i++){
            for(int j=0; j<n; j++){
                if(i == 0 || j == 0){
                    arr[i][j] = 1;
                }else{
                    arr[i][j] = arr[i][j-1] + arr[i-1][j];
                }
            }
        }

        return arr[m-1][n-1];
    }
}