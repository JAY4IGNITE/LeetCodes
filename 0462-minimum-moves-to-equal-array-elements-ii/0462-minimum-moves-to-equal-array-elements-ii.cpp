
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long ans = LLONG_MAX;
        for (int i=0;i<nums.size();i++) {
            long long moves = 0;
            for (int j=0;j<nums.size();j++) {
                moves += abs((long long)nums[i] - nums[j]);
            }
            ans = min(ans, moves);
        }
        return (int)ans;
    }
};
