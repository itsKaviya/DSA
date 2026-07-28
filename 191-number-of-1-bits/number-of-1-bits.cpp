class Solution {
public:
    string decimaltobinary(int num){
        if(num == 0){   return "0"; }

        string binary = "";

        while(num > 0){
            binary = ((num & 1) ? "1" : "0") + binary;
            num >>= 1;
        }
        return binary;
    }

    int hammingWeight(int n) {
        int cnt = 0;

        string str = decimaltobinary(n);
        for(char ch : str){
            if(ch-'0' == 1){
                cnt++;
            }
        }

        return cnt;
    }
};