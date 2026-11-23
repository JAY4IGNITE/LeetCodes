
class Solution {
public:
    int countGoodSubstrings(string s){
        int cnt = 0;
        for (int i=0;i+2<s.size();i++){
            if(s[i] != s[i + 1]) {
                if(s[i] != s[i + 2]){
                    if(s[i + 1] != s[i + 2]) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
