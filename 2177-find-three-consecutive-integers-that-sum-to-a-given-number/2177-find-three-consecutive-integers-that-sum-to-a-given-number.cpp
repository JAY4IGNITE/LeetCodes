class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long left = -1000000000000000,right = num;
        while(left<=right){
            long long mid = left + (right-left)/2;
            if(3*mid==num - 3){
                return {mid,mid+1,mid+2};
            }
            else if(3*mid<num-3){
                left = mid+1;
            }
            else{
                right = mid - 1;
            }
        }
        return {};
    }
};