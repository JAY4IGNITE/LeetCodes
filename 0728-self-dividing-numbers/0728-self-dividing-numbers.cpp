class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            bool f = 1;
            int num = i;
            while(num){
                int rem = num%10;
                if(rem == 0 || i%rem!=0){
                    f = 0;
                    break;
                }
                num/=10;
            }
            if(f) ans.push_back(i);
        }
        return ans;
    }
};