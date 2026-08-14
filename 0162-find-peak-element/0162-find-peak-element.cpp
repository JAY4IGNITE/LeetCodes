class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int idx = 0;
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                idx = i;
            }
        }
        return idx;
    }
};