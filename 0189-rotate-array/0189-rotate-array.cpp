class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k%n;
        deque<int>dq(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            int x = dq.back();
            dq.pop_back();
            dq.push_front(x);
        }
        for(int i=0;i<n;i++){
            nums[i] = dq.front();
            dq.pop_front();
        }
    }
};