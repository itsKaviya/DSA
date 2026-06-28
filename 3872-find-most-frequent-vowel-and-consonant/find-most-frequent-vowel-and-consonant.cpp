class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> vowels;
        map<char, int> cons;

        for(char ch : s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels[ch]++;
            }else{
                cons[ch]++;
            }
        }

        int vmax, cmax = 0;
        for(auto i : vowels){
            if(i.second > vmax){
                vmax = i.second;
            }
        }

        for(auto j : cons){
            if(j.second > cmax){
                cmax = j.second;
            }
        }

        return vmax+cmax;
    }
};