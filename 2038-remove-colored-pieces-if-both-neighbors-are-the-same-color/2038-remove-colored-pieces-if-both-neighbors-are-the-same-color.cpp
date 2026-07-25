class Solution {
public:
    bool winnerOfGame(string s) {
        int cnt=0,cnt1=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==s[i+1]&&s[i+1]==s[i+2]){
                if(s[i]=='A') cnt++;
                else cnt1++;
            }
        }
        return cnt>cnt1;
    }
};