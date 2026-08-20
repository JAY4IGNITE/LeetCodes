class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        ans1.push_back(nums[0]);
        ans2.push_back(nums[1]);
        for (int i = 2; i < nums.size(); i++) {
            if (ans1.back() > ans2.back()) {
                ans1.push_back(nums[i]);
            } else {
                ans2.push_back(nums[i]);
            }
        }
        for (int x : ans2) {
            ans1.push_back(x);
        }
        return ans1;
    }
};