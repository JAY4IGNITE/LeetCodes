class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            prefixSum.push_back(sum);
        }
        int n = prefixSum.size();
        for(int i=0;i<n;i++){
            int l,r;
            if(i==0){
                l = 0;
            }
            else{
                l = prefixSum[i-1];
            }
            r = prefixSum[n-1]-prefixSum[i];
            if(l==r) return i;
        }
        return -1;
    }
};