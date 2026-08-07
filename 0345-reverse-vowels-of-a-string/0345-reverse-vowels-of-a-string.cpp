class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return 1;
        else return 0;
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(isVowel(s[l])&&isVowel(s[r])){
                swap(s[l++],s[r--]);
            }
            else if(isVowel(s[l])){
                r--;
            }
            else{
                l++;
            }
        }
        return s;
    }
};