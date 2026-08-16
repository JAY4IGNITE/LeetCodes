class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int win_sum = 0;
        for(int i=0;i<k;i++){
            win_sum+=arr[i];
        }
        int count = 0;
        if (win_sum >= k * threshold) {
            count++;
        }
        for (int i = k; i < arr.size(); i++) {
            win_sum += arr[i];
            win_sum -= arr[i - k];
            if (win_sum >= k * threshold) {
                count++;
            }
        }
        return count;
    }
};