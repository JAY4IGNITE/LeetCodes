class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>a,b;
        if(s.size()!=t.size()) return 0;
        for(int i=0;i<s.size();i++){
            if(a.find(s[i])!=a.end()&&a[s[i]]!=t[i]) return 0;
            a[s[i]] = t[i];
            if(b.find(t[i])!=b.end()&&b[t[i]]!=s[i]) return 0;
            b[t[i]] = s[i];
        }
        return 1;
    }
};