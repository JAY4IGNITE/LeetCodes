class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int temp=nums[i];
            while(temp!=0){
                int rem=temp%10;
                sum+=rem;
                temp/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};