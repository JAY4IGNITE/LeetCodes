class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> mp;
        for (auto &match : matches) {
            int win = match[0];
            int loss = match[1];
            if (mp.find(win) == mp.end())
                mp[win] = 0;

            mp[loss]++;
        }
        vector<vector<int>> ans(2);
        for (auto &x : mp) {
            if (x.second == 0)
                ans[0].push_back(x.first);
            else if (x.second == 1)
                ans[1].push_back(x.first);
        }
        return ans;
    }
};