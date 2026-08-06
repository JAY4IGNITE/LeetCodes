class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a;
        for(int num : nums){
            if(num < pivot){
                a.push_back(num);
            }
        }
        for(int num : nums){
            if(num==pivot){
                a.push_back(num);
            }
        }
        for(int num : nums){
            if(num > pivot){
                a.push_back(num);
            }
        }
        return a;
        }
};