class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        int n = a.size();
        for(int st=0;st<n;st++){
            int cnt = 0;
            for(int i=0;i<=st;i++){
                auto it = find(a.begin(),a.begin()+st+1,b[i])!=a.begin()+st+1;
                if(it){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};