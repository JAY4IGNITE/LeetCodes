class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> loss;
        for (auto &match : matches) {
            int winner = match[0];
            int loser = match[1];
            if (loss.find(winner) == loss.end())
                loss[winner] = 0;

            loss[loser]++;
        }
        vector<vector<int>> ans(2);
        for (auto &x : loss) {
            if (x.second == 0)
                ans[0].push_back(x.first);
            else if (x.second == 1)
                ans[1].push_back(x.first);
        }
        return ans;
    }
};