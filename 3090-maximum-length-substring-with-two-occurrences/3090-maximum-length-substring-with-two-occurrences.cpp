class Solution {
public:
    int maximumLengthSubstring(string s) {
        int r = 0;
        int maxi = INT_MIN;
        set<char> st(s.begin(),s.end());
        int n = st.size();
        map<char,int> mp;
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