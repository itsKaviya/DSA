class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;

        unordered_set<string> banned_set(banned.begin(), banned.end());

        for(char &ch : paragraph){
            if(isalpha(ch)){
                ch = tolower(ch);
            }else{
                ch = ' ';
            }
        }

        stringstream ss(paragraph);
        string word = " ";
        string res = " ";
        int count = 0;

        while(ss >> word){
            if(banned_set.find(word) == banned_set.end()){
                freq[word]++;
            }

            if(freq[word] > count){
                count = freq[word];
                res = word;
            }
        }

        return res;
    }
};