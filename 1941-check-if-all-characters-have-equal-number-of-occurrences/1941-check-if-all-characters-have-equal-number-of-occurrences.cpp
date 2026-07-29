class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> m;
        for(auto x:s){
            m[x]++;
        }
        set<int> a;
        for(auto x:m){
            a.insert(x.second);
        }
        return a.size()==1;
    }
};