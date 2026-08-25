class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int prod = k;
        while(true){
            if(mp.count(prod)==0){
                return prod;
            }
            prod+=k;
        }
    }
};