class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        set<int> values;
        vector<int> res;
        
        for(int i : nums){
            values.insert(i);
        }

        sort(nums.begin(), nums.end());
        int end_val = nums[nums.size()-1];
        int start_val = nums[0];
        for(int i=start_val; i<= end_val; i++){
            if(values.contains(i) == false){
                res.push_back(i);
            }
        }

        return res;
    }
};