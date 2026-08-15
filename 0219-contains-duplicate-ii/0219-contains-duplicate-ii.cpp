class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                if(i-mp[nums[i]]<=k){
                    return 1;
                }
            }
            mp[nums[i]] = i;
        }
        return 0;
    }
};