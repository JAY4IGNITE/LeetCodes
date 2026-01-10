class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int sum=0;
            while(temp!=0){
                int rem = temp%10;
                sum +=rem;
                temp/=10;
            }
            a.push_back(sum);
        }
        int cnt=-1;
        for(int i=0;i<a.size();i++){
            if(a[i]==i){
                cnt = i;
                break;
            }
        }
        return cnt;
    }
};