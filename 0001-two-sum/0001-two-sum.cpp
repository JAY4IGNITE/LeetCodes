class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]+nums[i]==target){
                    if(i!=j){
                    a.push_back(i);
                    a.push_back(j);
                }
                }
            }
        }
        return a;
    }
};