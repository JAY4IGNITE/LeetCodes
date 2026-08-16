class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n, 1);
        int pr = 1;
        for (int i = 0; i < n; i++) {
            a[i] = pr;
            pr *= nums[i];
        }
        pr = 1;
        for (int i = n - 1; i >= 0; i--) {
            a[i] *= pr;
            pr *= nums[i];
        }
        return a;
    }
};