class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            string w = words[i];
            int k = 0;
            int j = w.size()-1;
            while(k<j){
                if(w[k]!=w[j]){
                    break;
                }
            k++;
            j--;
            }
            if(k>=j){
                return w;
            }
        }
        return "";
    }
};