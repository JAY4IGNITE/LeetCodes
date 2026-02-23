class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i])){
                continue;
            }
            else{
                a+= tolower(s[i]);
            }
        }
        string r = a;
        cout << r;
        reverse(a.begin(),a.end());
        if(r==a){
            return 1;
        }
        return 0;
    }
};