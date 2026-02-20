class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        set<int> res;
        for(int i=0;i<nums.size();i++){
            int start = nums[i][0];
            int end = nums[i][1];
            for(int j = start ; j<= end ; j++){
                res.insert(j);
            }
        }
        return res.size();
    }
};