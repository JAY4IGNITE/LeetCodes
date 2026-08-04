class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int total = s.size();
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            map<int,int> m;
            for(int j=i;j<n;j++){
                m[nums[j]]++;
                if(m.size()==total){
                    ans++;
                }
            }
        }
        return ans;
    }
};