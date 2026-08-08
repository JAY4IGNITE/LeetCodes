class Solution {
public:
    int countVowelStrings(int n) {
        long long ans = 1;
        for(int i = 1; i <= 4; i++) {
            ans = ans * (n + i) / i;
        }
        return ans;
    }
};