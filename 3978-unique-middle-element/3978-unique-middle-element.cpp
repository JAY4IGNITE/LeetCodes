class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;
        int cnt= 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == nums[mid]) {
                cnt++;
            }
        }
        return cnt == 1;
    }
};