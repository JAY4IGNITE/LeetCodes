class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> a;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                a.push_back(grid[i][j]);
            }
        }
        int n = a.size();
        map<int,int> mp;
        vector<int> ans(2,0);
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        int ni = grid.size()*grid.size();
        for(int i=1;i<=ni;i++){
            if(mp.find(i)==mp.end()) ans[1] = i;
            else if(mp[i]!=1) ans[0] = i;
        }
        return ans;
    }
};