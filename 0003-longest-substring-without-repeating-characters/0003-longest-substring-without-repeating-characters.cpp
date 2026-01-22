class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0;
    int start = 0;
    set<char> c;
    for (int i = 0; i < n; i++) {
        while (c.count(s[i])) {
            c.erase(s[start]);
            start++;
        }
        c.insert(s[i]);
        maxLength = max(maxLength, i - start + 1);
    }
    return maxLength; 
    }
};