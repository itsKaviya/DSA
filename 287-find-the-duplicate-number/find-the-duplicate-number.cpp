class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = 1;

        while(l < r){
            if(nums[l] == nums[r]){
                return nums[l];
            }
            l++;
            r++;
        }
        // for(int i=0;i<=nums.size();i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i];
        //     }
        // }
        return -1;
    }
};