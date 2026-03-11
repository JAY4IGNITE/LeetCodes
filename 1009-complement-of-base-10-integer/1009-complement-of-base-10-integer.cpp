class Solution {
public:
    int bitwiseComplement(int n) {
        int comp=0;
        int i=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            int bit=1-(n&1);
            comp+=bit*pow(2,i);
            i++;
            n=n>>1;
        }
     return comp;   
    }
};