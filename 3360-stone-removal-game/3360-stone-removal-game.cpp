class Solution {
public:
    bool canAliceWin(int n) {
       int c=0;
        for(int i=10; i>=1; i--){
            n-=i;
            c++;
            if(n<0 and c%2!=0) return false;
            else if(n<0 and c%2==0) return true; 
        }
        return false;
    }
};