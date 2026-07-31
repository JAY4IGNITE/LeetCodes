class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        sort(freq.rbegin(), freq.rend());
        int del = 0;
        for (int i = 1; i < 26; i++) {
            if (freq[i] >= freq[i - 1]) {
                int allow = max(0, freq[i - 1] - 1);
                del += freq[i] - allow;
                freq[i] = allow;
            }
        }
        return del;
    }
};