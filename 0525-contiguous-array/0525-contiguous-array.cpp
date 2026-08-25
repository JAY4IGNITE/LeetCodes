class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) sum -= 1;
            else sum += 1;
            if (mp.find(sum) != mp.end())
                maxi = max(maxi, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return maxi;
    }
};