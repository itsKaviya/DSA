class Solution {
public:
    int gcd(int a, int b){
        while(b>0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    long long gcdSum(vector<int>& nums) {
        
        vector<long long> prefixGCD;
        long long mxi = 0;
        for(int i=0;i<nums.size();i++){
            mxi = max(mxi, (long long)nums[i]);
            prefixGCD.push_back(gcd((long long)nums[i], mxi)); 
        }

        sort(prefixGCD.begin(), prefixGCD.end());
        
        long long res = 0, start = 0, end = prefixGCD.size()-1;

        while( start < end){
            res += gcd(prefixGCD[start], prefixGCD[end]);
            start++;
            end--;
        }

        return res;
    }
};