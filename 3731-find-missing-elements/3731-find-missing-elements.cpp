class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> a;
        map<int , int > m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            if(m.find(i)==m.end()) a.push_back(i);
        }
        return a;
    }
};