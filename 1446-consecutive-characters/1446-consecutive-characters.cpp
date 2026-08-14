class Solution {
public:
    int maxPower(string s) {
        int r = 0;
        int maxi = INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[r]){
                r = i;
            }
            maxi = max(maxi,i-r+1);
        }
        return maxi;
    }
};