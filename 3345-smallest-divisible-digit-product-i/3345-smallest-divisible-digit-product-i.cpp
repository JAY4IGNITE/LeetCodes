class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true){
            int temp=n;
            int pr=1;
            if (temp==0)
                pr = 0;
            else {
                while (temp > 0) {
                    int rem = temp % 10;
                    pr *= rem;
                    temp /= 10;
                }
            }
            if (pr%t == 0)
                return n;
            n++;
        }
    }
};