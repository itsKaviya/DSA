class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res ;
        for(int i = 0; i < nums.size();i++){
            int pos = abs(nums[i])-1;

            if(nums[pos] > 0){
                nums[pos] = -nums[pos];
            } 
        }

        for(int j=0; j<nums.size();j++){
            if(nums[j]>0){
                res.push_back(j+1);
            }
        }

        return res;
    }
};