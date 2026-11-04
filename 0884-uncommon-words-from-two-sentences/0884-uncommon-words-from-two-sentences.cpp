class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> mp;
        vector<string> ans;
        string word = "";
        string s = s1+" "+s2+" ";
        for(auto c:s){
            if(c==' '){
                mp[word]++;
                word = "";
            }
            else{
                word+=c;
            }
        }
        for(auto x:mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};