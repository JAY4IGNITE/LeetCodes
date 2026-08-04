class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>m;
        for(auto x:allowed){
            m[x]++;
        }
        int cnt = 0;
        for(auto x:words){
            bool f = 1;
            for(auto y:x){
                if(m.find(y)==m.end()){
                    f = 0;
                    break;
                }
            }
            if(f) cnt++;
        }
        return cnt;
    }
};