class Solution {
public:
    int strStr(string haystack, string needle) {
        int left=0;
        int ans = -1;
        if(haystack.contains(needle)){
            while(left<=haystack.size()-needle.size()){
                if(haystack.substr(left,needle.size())==needle){
                    ans = left;
                    break;
                }
                left++;
            }
        }
        return ans;
    }
};