class Solution {
public:
    string removeOuterParentheses(string s) {
        string a;
        int cnt = 0;
        for(auto x:s){
            if(x=='('){
                if(cnt>0){
                    a+=x;
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0){
                    a+=x;
                }
            }
        }
        return a;
    }
};