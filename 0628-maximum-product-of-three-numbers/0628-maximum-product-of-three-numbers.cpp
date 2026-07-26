class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pr = 1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        pr = max(nums[n-1]*nums[n-2]*nums[n-3],nums[n-1]*nums[0]*nums[1]);
        return pr;
    }
};