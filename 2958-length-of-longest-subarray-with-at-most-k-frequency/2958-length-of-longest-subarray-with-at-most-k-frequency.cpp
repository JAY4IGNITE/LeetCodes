class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> mp;
        int ans = 0;
        int right = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[right]]--;
                right++;
            }
            ans = max(ans,i-right+1);
        }
        return ans;
    }
};