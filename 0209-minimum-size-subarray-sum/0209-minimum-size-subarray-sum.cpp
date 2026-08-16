class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int r = 0;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                mini = min(mini,i-r+1);
                sum -= nums[r];
                r++;
            }
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};