class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        long long maxi = LLONG_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            long long diff = abs(nums[i]-nums[i+1]);
            maxi = max(diff,maxi);
        }
        return maxi;
    }
};