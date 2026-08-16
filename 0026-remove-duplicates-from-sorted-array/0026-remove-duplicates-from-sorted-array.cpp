class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto k = unique(nums.begin(),nums.end());
        nums.erase(k,nums.end());
        return nums.size();
    }
};