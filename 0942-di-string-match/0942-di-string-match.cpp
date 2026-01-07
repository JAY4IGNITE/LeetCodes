class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>res;
        int c1=0,c2=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
            res.push_back(c1);
            c1++;
            }
            else{
                res.push_back(n-c2);
                c2++;
            }
        }
        if(s[n-1]=='I') res.push_back(c1);
        else res.push_back(n-c2);
        return res;
    }
};