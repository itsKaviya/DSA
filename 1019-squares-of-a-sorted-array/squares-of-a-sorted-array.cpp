class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted_arr;

        for(int i=0;i<nums.size();i++){
            sorted_arr.push_back(nums[i]*nums[i]);
        }

        sort(sorted_arr.begin(), sorted_arr.end());

        return sorted_arr;
    }
};