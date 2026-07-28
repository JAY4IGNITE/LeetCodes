class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mp;
        int left = 0;
        int right = s.size()-1;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<i;j++){
                if(s[i]==s[j]){
                    return s[i];
                }
            }
        }
        return ' ';
    }
};