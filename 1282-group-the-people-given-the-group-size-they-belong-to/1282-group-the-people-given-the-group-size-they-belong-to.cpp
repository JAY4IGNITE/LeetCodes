class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> e;
        unordered_map<int,stack<int>> y;
        for(int i=0;i<g.size();i++){
           y[g[i]].push(i);
        }
        for(auto x: y){
            while(!x.second.empty()){
                vector<int> z;
                for(int i=0;i<x.first;i++){
                    z.push_back(x.second.top());
                    x.second.pop();
                }
                e.push_back(z);
            }
        }
        return e;
    }
};