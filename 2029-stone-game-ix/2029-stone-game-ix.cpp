class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int a=0,b=0,c=0;
        for(auto x:stones){
            int d = x%3;
            if(d==0)a++;
            else if(d==1)b++;
            else c++;
        }
        if(a%2==0) return b>0&&c>0;
        else return abs(b-c)>2;
    }
};