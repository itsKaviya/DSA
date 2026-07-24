class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> visited(26,false);

        for(char ch : s){
            int index = ch - 'a';
            if(visited[index]){
                return ch;
            }
            visited[index] = true;
        }

        return ' ';
    }
};