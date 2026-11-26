class Solution {
public:
    bool canAliceWin(int n) {
        int k = 10;
        bool ans = 1;
        while(n>=k){
            n-=k;
            k--;
            ans = !ans;
        }
        return !ans;
    }
};