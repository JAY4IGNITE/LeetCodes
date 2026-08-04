class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        int n = a.size();
        for(int l=0;l<n;l++){
            int cnt = 0;
            for(int i=0;i<=l;i++){
                if(find(a.begin(),a.begin()+l+1,b[i])!=a.begin()+l+1){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};