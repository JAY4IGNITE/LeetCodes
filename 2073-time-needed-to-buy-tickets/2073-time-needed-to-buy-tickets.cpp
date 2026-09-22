class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int> q;
       int n = tickets.size();
        for(int i=0;i<n;i++){
        q.push(i);
    }
    int turns = 0;
    while(tickets[k]>0){
        int front = q.front();
        q.pop();
        tickets[front]--;
        turns++;
        if(tickets[front]>0){
            q.push(front);
        }
    }
    return turns; 
    }
};