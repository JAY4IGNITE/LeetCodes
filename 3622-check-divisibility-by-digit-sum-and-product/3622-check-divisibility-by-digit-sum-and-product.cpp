class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int temp=n;
        while(temp!=0){
            int rem=temp%10;
            sum+=rem;
            mul*=rem;
            temp/=10;
        }
        if(n%(sum+mul)==0) return 1;
        return 0;
    }
};