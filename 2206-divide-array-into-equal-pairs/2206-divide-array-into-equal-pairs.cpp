class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second%2!=0) return 0;
        }
        return 1;
    }
};