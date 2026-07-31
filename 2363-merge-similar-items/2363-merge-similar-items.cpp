class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& item1, vector<vector<int>>& item2) {
        map<int,int> mp;
        vector<vector<int>> ans;
        for(auto item:item1){
            mp[item[0]] += item[1];
        }
        for(auto item:item2){
            mp[item[0]] += item[1];
        }
        for(auto x:mp){
            ans.push_back({x.first,x.second});
        }
        return ans;
    }
};