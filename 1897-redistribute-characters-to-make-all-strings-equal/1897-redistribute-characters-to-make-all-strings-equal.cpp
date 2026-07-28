class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>m;
        for(int i=0;i<words.size();i++){
            for(auto c:words[i]){
                m[c]++;
            }
        }
        int n=words.size();
        for(auto x:m){
            if(x.second%n!=0) return 0;
        }
        return 1;
    }
};