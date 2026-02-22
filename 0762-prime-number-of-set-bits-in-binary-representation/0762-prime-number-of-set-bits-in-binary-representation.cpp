class Solution {
public:
    int countSetBits(int n){
        int count = 0;
        while(n){
            int rem = n%2;
            count += rem;
            n /= 2;
        }
        return count;
    }
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left; i<=right; i++){
            int num = countSetBits(i);
            if(isPrime(num)) count++;
        }
        return count;
    }
};