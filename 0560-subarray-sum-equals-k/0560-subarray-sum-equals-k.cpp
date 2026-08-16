class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int prefixSum = 0;
        int cnt=0;
        for(auto x:nums){
            prefixSum += x;
            if(mp.count(prefixSum-k)){
                cnt += mp[prefixSum - k];
            }
            mp[prefixSum]++;
        }
        return cnt;
    }
};