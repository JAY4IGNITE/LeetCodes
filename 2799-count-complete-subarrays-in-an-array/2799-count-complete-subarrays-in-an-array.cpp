class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int unq = s.size();
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
                if(mp.size()==unq){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};