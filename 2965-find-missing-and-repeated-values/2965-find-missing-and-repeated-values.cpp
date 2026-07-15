class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
            }
        }
        vector<int> ans(2,0);
        int n = grid.size()*grid.size();
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()) ans[1] = i;
            else if(mp[i]!=1) ans[0] = i;
        }
        return ans;
    }
};