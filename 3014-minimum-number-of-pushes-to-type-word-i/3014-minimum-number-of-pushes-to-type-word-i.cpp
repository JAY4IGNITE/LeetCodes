class Solution {
public:
    int minimumPushes(string word) {
        int s = word.size();
        int ans = 0;
        if (s <= 8)
            ans = s;
        else if (s <= 16)
            ans = 8+(s-8)*2;
        else if (s <= 24)
            ans = 8+16+(s-16)*3;
        else
            ans = 8+16+24+(s-24)*4;
        return ans;
    }
};