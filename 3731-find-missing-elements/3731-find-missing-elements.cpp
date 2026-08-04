class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int l = nums[0];
        int r = nums[nums.size()-1];
        for(int i=l;i<r;i++){
            bool found = (find(nums.begin(),nums.end(),i)!=nums.end());
            if(!found){
                ans.push_back(i);
            }
        }
        return ans;
    }
};