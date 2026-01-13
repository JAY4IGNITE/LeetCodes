class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        for(auto x:strs){
            string temp = x;
            sort(temp.begin(),temp.end());
            m[temp].push_back(x);
        }
        vector<vector<string>> res;
        for(auto y:m){
            res.push_back(y.second);
        }
        return res;
    }
};