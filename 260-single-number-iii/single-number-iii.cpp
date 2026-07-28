class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> freq;

        for(int i : nums){
            freq[i]++;
        }

        vector<int> ans;
        for(auto it : freq){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};