class Solution {
public:
    vector<string> keys = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;

    void solve(int index, string& digits, string& temp){
        if(index == digits.size()){
            res.push_back(temp);
            return ;
        }
        string letters = keys[digits[index] - '0'];
        for(char ch : letters){
            temp.push_back(ch);
            solve(index+1, digits, temp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }

        string temp;
        solve(0, digits, temp);

        return res;
    }
};