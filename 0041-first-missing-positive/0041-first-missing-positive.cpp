class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = 1;
        for(auto x:nums){
            if(x==m){
                m++;
            }
        }
        return m;
    }
};