class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans="";
        for(auto x:s){
            if(x!='*'){
                st.push(x);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};