class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>a(nums.begin(),nums.end());
        sort(a.begin(),a.end());
        int l=0;
        int r = nums.size()-1;
        while(l<nums.size()&&nums[l]==a[l]){
            l++;
        }
        if(l==a.size()) return 0;
        while(r>=0&&nums[r]==a[r]){
            r--;
        }
        return r-l+1;
    }
};