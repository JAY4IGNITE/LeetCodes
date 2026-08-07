class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos = 0; int neg = 1;
        vector<int> a(n);
        for(auto x:nums){
            if(x>0){
                a[pos] = x;
                pos+=2;
            }
            else{
                a[neg] = x;
                neg+=2;
            }
        }
        return a;
    }
};