class Solution {
public:
    vector<vector<int>> res;

    void solve(int start, vector<int>& candidates, int target, vector<int>& temp){
        if(target == 0){
            res.push_back(temp);
            return ;
        }

        if(start >= candidates.size() || target < 0){
            return ;
        }
        solve(start+1, candidates, target, temp);
        temp.push_back(candidates[start]);
        solve(start, candidates, target-candidates[start], temp);
        temp.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0, candidates, target, temp);

        return res;
    }
};