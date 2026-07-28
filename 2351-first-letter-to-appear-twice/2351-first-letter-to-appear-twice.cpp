class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            if(m[s[i]]==2) return s[i];
        }
        return ' ';
    }
};