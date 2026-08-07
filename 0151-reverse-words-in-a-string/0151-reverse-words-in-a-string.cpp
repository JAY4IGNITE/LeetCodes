class Solution {
public:
    string reverseWords(string s) {
        string word;
        vector<string> words;
        for (char x: s) {
        if (x == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
            else word+=x;
        }
        if (!word.empty()) {
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string ans;
        for(int i=0;i<words.size();i++){
            if(i>0) ans+=" ";
            ans+=words[i];
        }
        return ans;
    }
};