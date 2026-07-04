class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string ch : operations){
            if(ch == "+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.push(n1);
                st.push(n1+n2);
            }
            else if(ch == "D"){
                st.push(st.top()*2); 
            }
            else if(ch == "C"){
                st.pop();
            }else{
                st.push(stoi(ch));
            }
        }

        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        return res;
    }
};