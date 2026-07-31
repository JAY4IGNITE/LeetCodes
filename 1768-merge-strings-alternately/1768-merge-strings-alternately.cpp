class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int n=word1.size();
        int m=word2.size();
        for(int i=0;i<max(n,m);i++){
            if(i<n)
                s += word1[i];
            if(i<m)
                s +=word2[i];
        }
        return s;
    }
};