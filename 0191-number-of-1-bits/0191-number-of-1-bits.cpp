class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};