class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int sum = 0;
        for(auto x:mp){
            if(x.second%k==0){
                sum+=(x.second)*(x.first);
            }
        }
        return sum;
    }
};