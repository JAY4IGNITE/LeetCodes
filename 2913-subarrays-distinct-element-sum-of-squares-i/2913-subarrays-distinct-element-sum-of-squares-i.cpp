class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            set<int> st;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                int cnt = st.size();
                ans += pow(cnt,2);
            }
        }
        return ans;
    }
};