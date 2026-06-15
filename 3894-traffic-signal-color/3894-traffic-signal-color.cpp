class Solution {
public:
    string trafficSignal(int t) {
        if(t==0) return "Green";
        else if(t==30) return "Orange";
        else if(30<t&&t<=90) return "Red";
        else return "Invalid";
    }
};