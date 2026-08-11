class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxlen = 0;
    int right = 0;
    // set<char> c;
    // for (int i = 0; i < n; i++) {
    //     while (c.count(s[i])) {
    //         c.erase(s[start]);
    //         start++;
    //     }
    //     c.insert(s[i]);
    //     maxLength = max(maxLength, i - start + 1);
    // }
    // return maxLength; 
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        while(mp[s[i]]>1){
            mp[s[right]]--;
            right++;
        }
        maxlen = max(maxlen,i-right+1);
    }
    return maxlen;
    }
};