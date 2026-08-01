class Solution {
public:
    int solve(vector<int>& arr,int i,int j){
        if(i==j){
            return arr[i];
        }
        int left_start = arr[i] - solve(arr,i+1,j);
        int right_start = arr[j] - solve(arr,i,j-1);
        return max(left_start,right_start); 
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(nums,0,nums.size()-1) >= 0;
    }
};