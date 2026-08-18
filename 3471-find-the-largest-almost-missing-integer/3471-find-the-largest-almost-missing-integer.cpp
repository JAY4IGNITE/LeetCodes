class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<=nums.size()-k;i++){
            set<int> win;
            for(int j=i;j<i+k;j++){
                win.insert(nums[j]);
            }
            for(auto x:win){
                mp[x]++;
            }
        }
        int ans = -1;
        for(auto x:mp){
            if(x.second==1){
                ans = max(ans,x.first);
            }
        }
        return ans;
    }
};