class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<int>a;
        for(auto x:m){
            a.push_back(x.second);
        }
        set<int>st(a.begin(),a.end());
        if(st.size()==1) return 1;
        return 0;
    }
};