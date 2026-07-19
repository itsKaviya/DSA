class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> count(26,0);
        vector<bool> freq(26, false);

        for(char ch : s){
            count[ch-'a']++;
        }

        string ans = "";

        for(char ch : s){
            count[ch - 'a']--;

            if(freq[ch - 'a'])  continue;

            while(!ans.empty() && ans.back()>ch && count[ans.back()-'a']>0){
                freq[ans.back()-'a'] = false;
                ans.pop_back();
            }

            ans.push_back(ch);
            freq[ch-'a'] = true;
        }

        return ans;
    }
};