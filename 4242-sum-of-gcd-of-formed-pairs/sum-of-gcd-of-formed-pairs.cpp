class Solution {
public:
    long long gcd(int a, int b){
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
        for(int it : nums){
            mxi = max(mxi, (long long)it);
            prefixGCD.push_back(gcd((long long)it, mxi)); 
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