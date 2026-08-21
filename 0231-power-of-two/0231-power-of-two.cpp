class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n<=0)||(n&(n-1))){
            return false;
        }
        return true;
    }
};