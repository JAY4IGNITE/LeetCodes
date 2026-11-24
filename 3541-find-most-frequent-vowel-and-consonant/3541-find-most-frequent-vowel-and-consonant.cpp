class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v,c;
        int mv=0,mc=0;
        for(char x:s)if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v[x]++;
        else c[x]++;
        for(auto&p:v)
        mv=max(mv,p.second);
        for(auto&p:c)
        mc=max(mc,p.second);
        return mv+mc;
    }
};