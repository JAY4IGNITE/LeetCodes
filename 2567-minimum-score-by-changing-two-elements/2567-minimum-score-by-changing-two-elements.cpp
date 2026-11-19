class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<=3) return 0;
        sort(nums.begin(),nums.end());
        int a = nums[n-3]-nums[0];
        int b = nums[n-1]-nums[2];
        int c = nums[n-2]-nums[1];
        return min(a,min(b,c));
    }
};