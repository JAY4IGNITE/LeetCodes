class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) 
    {
        map<string,int>mpp1;
        map<string,int>mpp2;
        int cnt=0;
        for(string s:words2)
        {
            mpp1[s]++;
        }
        for(string s:words1)
        {
            mpp2[s]++;
        }
        for(string s:words1)
        {
            if(mpp1[s]==1&&mpp2[s]==1) cnt++;
        }
        return cnt;
    }
};