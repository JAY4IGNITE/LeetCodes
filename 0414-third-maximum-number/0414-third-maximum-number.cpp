class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> a(nums.begin(),nums.end());
        vector<int> v(a.begin(),a.end());
        if(v.size()<3){
            return v[v.size()-1];
        }
        else{
            return v[v.size()-3];
        }
    }
};