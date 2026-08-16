class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int win_cnt = 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                win_cnt++;
            }
        }
        int ans = win_cnt;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])){
                win_cnt++;
            }
            if(isVowel(s[i-k])){
                win_cnt--;
            }
            ans = max(ans,win_cnt);
        }
        return ans;
    }
};