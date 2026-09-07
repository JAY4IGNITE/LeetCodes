class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> a;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
                a.push_back(sum);
            }
        }
        sort(a.begin(),a.end());
        return a[a.size()-1];
    }
};