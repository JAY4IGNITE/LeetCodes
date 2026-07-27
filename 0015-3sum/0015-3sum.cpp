class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> a;
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right = nums.size()-1;
        while(left<right){
            if(nums[i]+nums[left]+nums[right]==0){
                a.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }
            if(nums[i]+nums[left]+nums[right]<0){
                left++;
            }
            if(nums[i]+nums[left]+nums[right]>0){
                right--;
            }
        }
        }
        vector<vector<int>> ans(a.begin(),a.end());
        return ans;
    }
};