class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        for(int i=1;i<=n;i++){
            total=total+(i-1)/7+(i-1)%7+1;
        }
        return total;
    }
};