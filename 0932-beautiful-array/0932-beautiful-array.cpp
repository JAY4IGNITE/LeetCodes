class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>ans;
        ans.push_back(1);
        while(n > ans.size()){
            vector<int>temp;
            for(int i : ans){
                if(2*i - 1 <= n)
                    temp.push_back(2*i - 1);
            }
            for(int i : ans){
                if(2*i <= n)
                    temp.push_back(2*i);
            }
            ans = temp;
        }
        return ans;
    }
};