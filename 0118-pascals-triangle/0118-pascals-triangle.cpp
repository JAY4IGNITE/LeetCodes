class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>a(i+1);
            ans.push_back(a);
            for (int j = 0; j <= i; j++){
                if (j == 0 || j == i) ans[i][j] = 1;
                else ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        return ans;
    }
};