class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans ^=nums[i];
        }
        if(ans!=0) return nums.size();
        bool a=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                a=0;
                break;
            }
        }
        if(!a) return nums.size()-1;
        return 0;
    }
};