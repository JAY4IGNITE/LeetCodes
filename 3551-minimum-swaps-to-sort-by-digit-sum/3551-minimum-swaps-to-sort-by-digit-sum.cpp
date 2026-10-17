class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int temp = nums[i], sum = 0;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            v.push_back({sum, nums[i]});
        }
        sort(v.begin(), v.end());
        map<int, int> pos;
        for (int i = 0; i < n; i++)
            pos[nums[i]] = i;
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != v[i].second) {
                swaps++;
                int j = pos[v[i].second];
                pos[nums[i]] = j;
                pos[v[i].second] = i;
                swap(nums[i], nums[j]);
            }
        }
        return swaps;
    }
};