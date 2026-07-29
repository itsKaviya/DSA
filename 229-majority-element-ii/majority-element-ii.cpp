class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        int n = nums.size();

        for(int i : nums){
            freq[i]++;
        }

        vector<int> res;
        for(auto it : freq){
            if(it.second > (n/3)){
                res.push_back(it.first);
            }
        }

        return res;
    }
};