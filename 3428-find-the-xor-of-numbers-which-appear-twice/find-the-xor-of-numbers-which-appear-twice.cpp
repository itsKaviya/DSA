class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int, int> freq;

        for(int i : nums){
            freq[i]++;
        }

        vector<int> arr;

        for(auto it: freq){
            if(it.second == 2){
                arr.push_back(it.first);
            }
        }

        int res = 0;
        for(int num : arr){
            res ^= num;
        }

        return res;
    }
};