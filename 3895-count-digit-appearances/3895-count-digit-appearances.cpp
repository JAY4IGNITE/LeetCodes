class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for (int x : nums) {
            string s = to_string(x);
            for (char c : s) {
                if (c - '0' == digit) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};