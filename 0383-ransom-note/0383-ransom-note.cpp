class Solution {
public:
    bool canConstruct(string r, string m) {
        if (r.size() > m.size()) return false;

        map<char, int> a;
        for (char c : m) a[c]++;

        for (char k : r) {
            if (a[k] == 0) return false;
            a[k]--;
        }
        return true;
    }
};