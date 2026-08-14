class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n=d.size();
        for(int i=n-1;i>=0;i--){
            if(d[i]!=9){
                d[i]++;
                return d;
            }
            d[i] = 0;
        }
        vector<int> ans(n+1,0);
        ans[0]=1;
        return ans;
    }
};