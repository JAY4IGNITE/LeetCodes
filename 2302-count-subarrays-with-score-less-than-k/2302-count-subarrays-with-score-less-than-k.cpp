class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long ans=0,sum=0;
        long long l = 0;
        for(long long i=0;i<n;i++){
            sum+=nums[i];
            while(sum*(i-l+1)>=k){
                sum-=nums[l];
                l++;
            }
            ans+=(i-l+1);
        }
        return ans;
    }
};