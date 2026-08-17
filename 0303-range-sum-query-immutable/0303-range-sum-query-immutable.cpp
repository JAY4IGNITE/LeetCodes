class NumArray {
public: 
    vector<int> nums,prefixSum;
    NumArray(vector<int>& nums) {
        nums = nums;
        int rs = 0;
        for(int i=0;i<nums.size();i++){
            rs+=nums[i];
            prefixSum.push_back(rs);
        }
    }
    int sumRange(int l, int r) {
        if(l==0) return prefixSum[r];
        return prefixSum[r]-prefixSum[l-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */