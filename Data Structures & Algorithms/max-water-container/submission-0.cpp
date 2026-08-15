class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , j = heights.size() - 1;
        int max_water = 0;
        while(i < j){
            if(heights[i] < heights[j]){
                max_water = max(max_water , heights[i] * (j - i));
                j--;
            }
            else if(heights[i] > heights[j]){
                max_water = max(max_water , heights[j] * (j - i));
                j--;
            }
            else{
                max_water = max(max_water , heights[i] * (j - i));
                j--;
            }
            if( j == i){
                i++;
                j = heights.size() - 1;
            }
             
        }
        return max_water;
    }
};
