class Solution {
public:
    bool isUpperCase(char ch){
        return ch >= 65 && ch <=90;
    }

    bool detectCapitalUse(string word) {
        int uppercount = 0;
        for(int i=0;i<word.size();i++){
            if(isUpperCase(word[i])){
                uppercount++;
            }
        }

        if(uppercount == word.size()){
            return true;
        }else if(uppercount == 0){
            return true;
        }else if(isUpperCase(word[0]) && uppercount == 1){
            return true;
        }
        else{
            return false;
        }

    }
};