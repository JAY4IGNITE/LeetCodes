class Solution {
public:
    bool winnerOfGame(string s) {
        int acnt=0,bcnt=0,a=0,b=1,c=2;
        while(c<s.size()){
            if(s[a]=='A'&&s[b]=='A'&&s[c]=='A') acnt++;
            if(s[a]=='B'&&s[b]=='B'&&s[c]=='B') bcnt++;
            a++;
            b++;
            c++;
        }
        if(acnt>bcnt) return 1;
        return 0;
    }
};