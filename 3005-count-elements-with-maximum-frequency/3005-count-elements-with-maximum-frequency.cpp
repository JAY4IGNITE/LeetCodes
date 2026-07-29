class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxi = INT_MIN;
        vector<int>a;
        int ans = 0;
        for(auto x:m) {
            if(x.second>maxi)
                maxi = max(x.second,maxi);
        }
        for(auto x:m){
            if(x.second==maxi) ans+=maxi;
        }
        return ans;
    }
};