class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int r=0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[r]]--;
                r++;
            }
            ans = max(ans,i-r+1);
        }
        return ans;
    }
};