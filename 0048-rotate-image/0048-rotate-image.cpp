class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        reverse(m.begin(),m.end());
        vector<vector<int>> a(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m[i].size();j++){
                a[j][i]=m[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m[i].size();j++){
                m[i][j]=a[i][j];
            }
        }
    }
};