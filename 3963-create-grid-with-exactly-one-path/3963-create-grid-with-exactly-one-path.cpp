class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> s(m,string(n,'#'));
        int r = 0 , c = 0;
        s[r][c] = '.';
        while(r<m-1||c<n-1){
            s[r][c] = '.';
            if(c<n-1){
                c++;
            }
            else{
                r++;
            }
        }
        s[r][c] = '.';
        return s;
    }
};