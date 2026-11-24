class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int n=0;
        for(int i=0;i<o.size();i++){
            if(o[i]=="--X"||o[i]=="X--"){
                n--;
            }
            else{
                n++;
            }
        }
        return n;
    }
};