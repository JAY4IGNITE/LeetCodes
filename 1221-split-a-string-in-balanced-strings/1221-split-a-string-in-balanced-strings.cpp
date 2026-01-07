class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0 , cnt1 = 0 , a = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') cnt++;
            else cnt1++;
            if(cnt==cnt1){
                a++;
                cnt=0;
                cnt1=0;
            }
        }
        return a;
    }
};