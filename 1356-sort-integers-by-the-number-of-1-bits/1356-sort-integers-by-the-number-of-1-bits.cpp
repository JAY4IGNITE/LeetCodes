class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            int temp = arr[i];
            int cnt = 0;
            while(temp!=0){
                int rem=temp%2;
                if(rem==1){
                    cnt++;
                }
                temp/=2;
            }
            m[arr[i]] = cnt;
        }
        sort(arr.begin(), arr.end(), [&](int x, int y) {
            int bitsX = m[x];
            int bitsY = m[y];
            if (bitsX != bitsY) {
                return bitsX < bitsY;
            }
            return x < y;
        });
        
        return arr;
    }
};
