class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        string ans = "";
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                string a=to_string(nums[j]);
                string b=to_string(nums[j+1]);
                if((a+b)<(b+a)){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        if(nums[0]==0) return "0";
        for(auto x:nums){
            ans+=to_string(x);
        }
        return ans;
    }
};