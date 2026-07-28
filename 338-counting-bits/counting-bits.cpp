class Solution {
public:
    string decimaltobinary(int num){
        if(num==0){ return "0"; }

        string binary = "";
        while(num > 0){
            binary = ((num & 1)?"1":"0") + binary;
            num /= 2;
        }
        return binary;
    }

    vector<int> countBits(int n) {
        vector<int> res;

        while(n >= 0){
            string bstr = decimaltobinary(n);

            int cnt = 0;
            for(char ch : bstr){
                if(ch-'0' == 1){
                    cnt++;
                }
            }
            res.push_back(cnt);

            n--;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};