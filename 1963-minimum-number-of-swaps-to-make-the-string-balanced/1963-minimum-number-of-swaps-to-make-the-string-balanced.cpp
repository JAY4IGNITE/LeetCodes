class Solution {
public:
    int minSwaps(string s) {
        int bal = 0;
        for(char c:s){
            if(c=='['){
                bal++;
            }
            else{
                if(bal>0){
                    bal--;
                }
            }
        }
        return (bal+1)/2;
    }
};