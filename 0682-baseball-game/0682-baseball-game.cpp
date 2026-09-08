class Solution {
public:
    int calPoints(vector<string>& op) {
        int top = -1;
        stack<int> st;
        for(auto x:op){
            if(x!="C"&&x!="D"&&x!="+"){
                st.push(stoi(x));
            }
            else if(x=="C"){
                    st.pop();
                }
            else if(x=="D"){
                    st.push(st.top()*2);
                }
            else if(x=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();

                st.push(a);
                st.push(a + b);
                }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};