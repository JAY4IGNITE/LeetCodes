class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        vector<int> ans;
        if (m > n) return ans;
        map<char, int> mp, mpp;
        for (char c : p) {
            mp[c]++;
        }
        for (int i = 0; i < m; i++) {
            mpp[s[i]]++;
        }
        if (mp == mpp) {
            ans.push_back(0);
        }
        for (int i = m; i < n; i++) {
            mpp[s[i]]++;
            mpp[s[i - m]]--;
            if (mpp[s[i - m]] == 0) {
                mpp.erase(s[i - m]);
            }
            if (mp == mpp) {
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};