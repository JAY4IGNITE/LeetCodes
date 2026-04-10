class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size(),mini=1e9;

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        int dist=abs(i-j)+abs(j-k)+abs(k-i);
                        mini=min(mini,dist);
                    }
                }
            }
        }

        return mini==1e9?-1:mini;
    }
};