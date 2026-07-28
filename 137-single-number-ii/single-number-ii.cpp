class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        int ans = 0;

        for(auto i : freq){
            if(i.second == 1){
                ans = i.first;
            }
        }

        return ans;
    }
};