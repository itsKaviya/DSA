class Solution {
public:
    bool isVowel(char ch){
        return (ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }

    string reverseVowels(string s) {
        int st = 0;
        int en = s.size()-1;

        while( st < en ){
            if(isVowel(tolower(s[st])) && isVowel(tolower(s[en]))){
                swap(s[st] , s[en]);
                st++;
                en--;
            }else if(!isVowel(tolower(s[st]))){
                st++;
            }
            else if(!isVowel(tolower(s[en]))){
                en--;
            }
        }

        return s;
    }
};