class Solution {
public:
    // int zeroesCnt(vector<int>& a,int i,int j){
    //     int cnt = 0;
    //     for(int p=i;p<j;p++){
    //         if(a[p]==0) cnt++;
    //     }
    //     return cnt;
    // }
    int longestOnes(vector<int>& nums, int k) {
        // int l = 0;
        // int r = 0;
        // while(){
        //     if(zeroesCnt(nums,l,r)<k){

        //     }
        // }
        int cnt = 0;
        int left = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
            }
            while(cnt>k){
                if(nums[left]==0){
                    cnt --;
                }
                left++;
            }
            maxi = max(maxi,i-left+1);
        }
        return maxi;
    }
};