class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum=0,sum1=0;
        for(int i=1;i<=n;i++){
            sum+=(2*i)-1;
        }
        for(int i=1;i<=n;i++){
            sum1+=2*i;
        }
        return gcd(sum,sum1);
    }
};