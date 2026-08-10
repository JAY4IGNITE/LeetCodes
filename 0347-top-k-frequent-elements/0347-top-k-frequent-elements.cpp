class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>a;
        for(auto x:m){
            a.push({x.second,x.first});
        }
        vector<int>b;
        for(int i=0;i<k;i++){
            b.push_back(a.top().second);
            a.pop();
        }
        return b;
    }
};