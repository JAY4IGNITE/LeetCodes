class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++){
            int mini=INT_MAX;
            mini=min(mini,nums[i]);
            int l=nums[i];
            for(int j=i; j<nums.size(); j++){
                mini=min(mini, nums[j]);
                l=l&nums[j];
                if(l==mini){
                    c++;
                }
            }
        }
        return c;
    }
};