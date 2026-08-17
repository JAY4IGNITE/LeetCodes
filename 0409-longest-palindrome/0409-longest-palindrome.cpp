class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        int ans = 0;
        bool hasOdd = false;
        for (auto &[ch, count] : freq) {
            ans += (count / 2) * 2;
            if (count % 2 == 1) {
                hasOdd = true;
            }
        }
        if (hasOdd) {
            ans++;
        }
        return ans;
    }
};