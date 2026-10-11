class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>a;
        for(int i=1;i<=nums.size();i++){
            if(nums.size()%i==0){
                a.push_back(nums[i-1]);
            }
        }
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=pow(a[i],2);
        }
        return sum;
    }
};