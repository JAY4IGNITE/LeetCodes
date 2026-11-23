class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int l=0, r=0, ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                cnt++;
                r=0;
            }
            while(cnt == k){
                r++;
                if(nums[l]%2!=0){
                    cnt--;
                }
                l++;
            }
            ans+=r;
        }
        return ans;
    }
};