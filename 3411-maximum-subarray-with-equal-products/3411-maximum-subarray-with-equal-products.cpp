class Solution {
public:
    int maxLength(vector<int>& nums) {
        int l=0,prod=1,ans=2;
        for(int i=0;i<nums.size();i++){
            while(gcd(prod,nums[i])!=1){
                prod/=nums[l];
                l++;
            }
            prod*=nums[i];
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};