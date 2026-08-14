class Solution {
public:
    int maximumLengthSubstring(string s) {
        int r = 0;
        map<int,int> mp;
        int maxi = INT_MIN;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>2&&mp.size()){
                mp[s[r]]--;
                r++;
            }
            maxi = max(maxi,i-r+1);
        }
        return maxi;
    }
};