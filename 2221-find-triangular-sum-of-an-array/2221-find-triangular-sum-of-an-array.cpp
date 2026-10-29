class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()>1){
            vector<int> v;
            for(int i=0;i<nums.size()-1;i++){
                int sum = nums[i]+nums[i+1];
                v.push_back(sum%10);
            }
            nums = v;
        }
        return nums[0];
    }
};