class Solution {
public:
    bool charcheck(char c){
        if(isalpha(c)) return 1;
        else return 0;
    }
    string reverseByType(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(charcheck(s[i])) {
                i++;
                continue;
            }
            if(charcheck(s[j])) {
                j--;
                continue;
            }
            swap(s[i], s[j]);
            i++;
            j--;
        }
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            if(!charcheck(s[l])) {
                l++;
                continue;
            }
            if(!charcheck(s[r])) {
                r--;
                continue;
            }
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
};