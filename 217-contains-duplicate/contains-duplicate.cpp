class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>compare;

        for(int i=0;i<nums.size();i++){
            if(compare.count(nums[i])){   return true; }
            compare.insert(nums[i]);
        }

        return false;
    }
};