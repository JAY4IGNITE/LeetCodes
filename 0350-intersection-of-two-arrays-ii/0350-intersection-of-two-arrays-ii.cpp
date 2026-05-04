class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set;
        vector<int>temp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    temp.push_back(nums2[j]);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        return temp;      
    }
};