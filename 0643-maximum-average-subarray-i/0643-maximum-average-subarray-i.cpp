class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        double sum = 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double sum1 = sum;
        for(int i=k;i<nums.size();i++){
            sum1 += nums[i];
            sum1 -= nums[i-k];
            sum = max(sum1,sum);
        }
        double avg = sum/k;
        return avg;
    }
};