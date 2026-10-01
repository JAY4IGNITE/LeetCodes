class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0,end = 0 , far = 0;
        for(int i=0;i<nums.size()-1;i++){
            far = max(far,i+nums[i]);
            if(i==end){
                jumps++;
                end = far;
            }
        }
        return jumps;
    }
};