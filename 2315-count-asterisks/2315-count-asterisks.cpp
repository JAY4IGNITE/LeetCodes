class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0,res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|') cnt++;
            if(s[i]=='*' && cnt%2==0) res++;
        }
        return res;
    }
};