class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return 0;
        unordered_map<char, int> need, window;
        for (char c : s1)
            need[c]++;
        int k = s1.size();
        for (int i = 0; i < k; i++)
            window[s2[i]]++;
        if (window == need)
            return 1;
        for (int right = k; right < s2.size(); right++) {
            window[s2[right]]++;
            window[s2[right - k]]--;
            if (window[s2[right - k]] == 0)
                window.erase(s2[right - k]);
            if (window == need)
                return 1;
        }
        return 0;
    }
};