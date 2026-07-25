class Solution {
public:
    vector<int> digits(int num){
        vector<int> nums ;
        while(num > 0){
            nums.push_back(num % 10);
            num /= 10;
        }
        return nums;
    }

    int maxProduct(int n) {
        vector<int> ndigits = digits(n);
        int maxi = INT_MIN;

        for(int i=0;i<ndigits.size(); i++){
            for(int j = i+1; j<ndigits.size(); j++){
                maxi = max(maxi, (ndigits[i] * ndigits[j]));
            }
        }

        return maxi;
    }
};