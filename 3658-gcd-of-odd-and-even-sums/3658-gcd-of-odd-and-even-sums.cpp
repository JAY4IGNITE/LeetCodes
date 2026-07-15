class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even = 0  , odd = 0;
        for(int i=1;i<=n*2;i++){
            if(i%2==0){
                even+=i;
            }
            else{
                odd+=i;
            }
        }
        int ans = gcd(odd,even);
        return ans;
    }
};