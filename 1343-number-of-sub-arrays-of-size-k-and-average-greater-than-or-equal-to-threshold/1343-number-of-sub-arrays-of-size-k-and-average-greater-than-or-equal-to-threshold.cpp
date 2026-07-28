class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        double sum = 0;
        int cnt = 0;
        for(int i=0;i<arr.size();i++){
            sum +=arr[i];
            if(i>=k-1){
                double avg = sum/k;
                if(avg>=threshold){
                    cnt++;
                }
                sum -= arr[left];
                left++;
            }
        }
        return cnt;
    }
};