class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long left = -pow(10,15) , right = num;
        while(left<=right){
            long long mid = left + (right - left)/2;
            if(3*mid+3==num){
                return {mid,mid+1,mid+2};
            }
            else if(3*mid+3<num){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return {};
    }
};