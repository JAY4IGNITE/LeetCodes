class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = INT_MIN;
        int i = 0 , j = height.size()-1;
        while(i<j){
            int w = j-i;
            int h = min(height[i],height[j]);
            int area = h*w;
            max_area = max(area,max_area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
};