class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            nums[i] -=1;
        }
        sort(nums.begin(),nums.end());
        return nums[n-1]*nums[n-2];
    }
};