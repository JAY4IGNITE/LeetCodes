class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        for(auto x:word){
            mp[x]++;
        }
        vector<int>a;
        for(auto x:mp){
            a.push_back(x.second);
        }
        int ans = 0;
        sort(a.rbegin(),a.rend());
        for(int i=0;i<a.size();i++){
            ans += a[i]*((i/8)+1);
        }
        return ans;
    }
};