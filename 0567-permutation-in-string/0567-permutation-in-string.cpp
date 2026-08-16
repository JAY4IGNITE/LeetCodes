class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int  n=s1.size();
        if(n>s2.size()) return 0;
        map<char,int> mp;
        for(auto x:s1){
            mp[x]++;
        }
        for(int i=0;i<=s2.size()-n;i++){
            map<char,int> mp1;
            for(int j=i;j<i+n;j++){
                mp1[s2[j]]++;
            }
            if(mp1==mp) return 1;
        }
        return 0;
    }
};