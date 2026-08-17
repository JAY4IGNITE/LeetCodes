class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 1,cnt = 1;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }            
            if(nums[i]==nums[i+1]-1){
                cnt++;
            }
            else{
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
        ans = max(ans,cnt);
        return ans;
    }
};