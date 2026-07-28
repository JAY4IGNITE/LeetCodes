class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.size()!=t.size()) return 0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:t){
            mp[x]--;
        }
        for(auto x:mp){
            if(x.second !=0) return 0;
        }
        return 1;
    }
};