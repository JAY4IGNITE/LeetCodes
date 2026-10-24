
class Solution {
public:
    int days(string s) {
        int m[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int month = stoi(s.substr(0,2));
        int day = stoi(s.substr(3,2));
        for(int i = 0; i < month - 1; i++)
            day += m[i];
        return day;
    }
    int countDaysTogether(string a, string b, string c, string d) {
        int start = max(days(a), days(c));
        int end = min(days(b), days(d));
        return max(0, end - start + 1);
    }
};
