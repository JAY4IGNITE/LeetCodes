class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxe = *max_element(candies.begin(),candies.end());
        int maxva=candies[0];
        vector<bool> a;
        for(int i=0;i<candies.size();i++){
            a.push_back(candies[i]+extraCandies >= maxe );
        }
        return a;
    }
};