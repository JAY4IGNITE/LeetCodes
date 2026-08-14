class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        string a = s+s;
        if(a.contains(goal)) return 1;
        return 0;
    }
};