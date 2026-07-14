class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
            else continue;
        }
        if(nums[n-1]>nums[0]) cnt+=1;
        cout << cnt;
        if(cnt>1) return 0;
        return 1;
    }
};