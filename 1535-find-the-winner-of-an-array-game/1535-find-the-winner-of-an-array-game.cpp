class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
    int n = arr.size();
    if(k>=n){
        return *max_element(arr.begin(),arr.end());
    }
    int curr = arr[0];
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(curr>arr[i]){
            cnt++;
        }
        else{
            curr = arr[i];
            cnt = 1;
        }
        if(cnt==k) break;
    }
    return curr;
    }
};