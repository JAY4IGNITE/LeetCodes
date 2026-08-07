class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int m = nums.size()/2;
        vector<double> ans;
        while(m){
            double avg = (double)(nums[l]+nums[r])/2;
            ans.push_back(avg);
            l++;
            r--;
            m--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};