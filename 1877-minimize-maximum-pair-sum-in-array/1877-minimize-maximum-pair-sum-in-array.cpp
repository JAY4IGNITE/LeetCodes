class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r = nums.size()-1;
        int maxp=INT_MIN;
        while(l<r){
            int pairsum = nums[l]+nums[r];
            maxp = max(maxp,pairsum);
            l++;
            r--;
        }
        return maxp;
    }
};