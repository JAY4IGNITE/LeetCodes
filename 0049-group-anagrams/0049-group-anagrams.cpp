class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto x:strs){
            string a = x;
            sort(a.begin(),a.end());
            mp[a].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans; 
    }
};