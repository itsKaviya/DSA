class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;

        for(int i=0;i<n;i++){
            bool visited[265] = {false};
            int currentlen = 0;

            for(int j=i;j<n;j++){
                if(visited[s[j]] == true){
                    break;
                }

                visited[s[j]] = true;
                currentlen++;
        }
        if(currentlen > maxlen){
                maxlen = currentlen;
        }        
    }
    return maxlen;
    }
};