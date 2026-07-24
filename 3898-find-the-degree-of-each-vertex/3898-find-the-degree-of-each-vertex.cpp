class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int>a(n,0);
        for(int i=0;i<matrix.size();i++){
            int cnt = 0;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    cnt++;
                }
                a[i] = cnt;
            }
        }
        return a;
    }
};