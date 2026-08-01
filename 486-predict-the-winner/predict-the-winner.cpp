class Solution {
public:
    vector<vector<int>> visited;
    int maxDiff(vector<int>& nums, int i, int j){
        if(i==j)    return nums[i];

        if(visited[i][j] != -1){
            return visited[i][j];
        }

        int left = nums[i] - maxDiff(nums, i+1, j);
        int right = nums[j] - maxDiff(nums, i, j-1);

        visited[i][j] = max(left, right);
        return visited[i][j];
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        if(n % 2 == 0){ return true; }

        visited.assign(n , vector<int>(n, -1));

        return maxDiff(nums, 0, n-1) >= 0;
    }
};