class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;

        string combined_Str = s1 + " " + s2;
        string word;

        stringstream ss(combined_Str);

        while(ss >> word){
            freq[word]++;
        }

        vector<string> res;
        for(auto it : freq){
            if(it.second == 1)  res.push_back(it.first);
        }

        return res;
    }
};