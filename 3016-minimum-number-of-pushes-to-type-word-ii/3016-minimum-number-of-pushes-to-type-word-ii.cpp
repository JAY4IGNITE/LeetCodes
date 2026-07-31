class Solution {
public:
    int minimumPushes(string word) {
        vector<int> a;
        map<char,int> m;
        for(auto x:word){
            m[x]++;
        }
        for(auto x:m){
            a.push_back(x.second);
        }
        sort(a.rbegin(),a.rend());
        int ans = 0;
        for(int i=0;i<a.size();i++){
            ans += a[i]*(i/8+1);
        }
        return ans;
    }
};