class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result(n, -1);
        if(n <= 2*k) return result;
        int i = 0, j = 0, x = 2*k+1;
        long long sum = 0;
        while(j<n) {
            sum += nums[j];
            if(j - i == 2*k) {
                result[i+k] = sum/x;
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return result;
    }
};