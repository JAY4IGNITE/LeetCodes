class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,right=0;
        map<int,int>m;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            while(m[nums[i]]>k){
                m[nums[right]]--;
                right++;
            }
            ans = max(ans,i-right+1);
        }
        return ans;
    }
};