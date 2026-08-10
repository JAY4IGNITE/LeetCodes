class Solution {
public:
    bool isVowel(char c){
        return c=='a'|| c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int subSum = 0;
        for(int i=0;i<k;i++)
        {
            if(isVowel(s[i])){
                subSum++;
            }
        }
        int maxSum = subSum;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])) subSum++;
            if(isVowel(s[i-k])) subSum--;
            maxSum = max(maxSum,subSum);
        }
        return maxSum;
    }
};