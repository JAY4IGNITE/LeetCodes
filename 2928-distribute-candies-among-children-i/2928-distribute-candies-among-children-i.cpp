class Solution {
public:
    int distributeCandies(int n, int limit) {
        int a = 0 , cnt = 0;
        for(int i=0;i<=limit;i++){
            for(int j=0;j<=limit;j++){
                a = n-i-j;
                if(a>=0&&a<=limit){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};