class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mp1(nums1.begin(), nums1.end());
        unordered_set<int> mp2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);
        for (auto ele : mp1) {
            if (mp2.find(ele) == mp2.end()) {
                ans[0].push_back(ele);
            }
        }
        for (auto ele : mp2) {
            if (mp1.find(ele) == mp1.end()) {
                ans[1].push_back(ele);
            }
        }
        return ans;
    }
};