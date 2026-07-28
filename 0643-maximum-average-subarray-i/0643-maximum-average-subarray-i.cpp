class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1) return (double)nums[0];
        int left = 0;
        double sum = 0;
        double maxAvg = -1000000;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k-1){
                double avg = sum/k;
                maxAvg = max(avg,maxAvg);
                sum -= nums[left];
                left++;
            }
        }
        return maxAvg;
    }
};