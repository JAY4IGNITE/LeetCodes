class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        vector<string> a;
        string temp = "";
        for (char c : s) {
            if (c == ' ') {
                if (!temp.empty()) {
                    a.push_back(temp);
                    temp = "";
                }
            } else temp += c;
        }
        if (!temp.empty()) a.push_back(temp);
        string ans = "";
        for(int i=a.size()-1;i>=0;i--){
            ans += a[i] ;
            if(i!=0){
                ans+=" ";
            }
        }
        return ans;
    }
};