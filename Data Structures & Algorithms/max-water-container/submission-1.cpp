class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0  , j = n - 1;
        int max_water = 0;
        while(i < j){
            if(heights[i] <= heights[j]){
                max_water = max(heights[i]*(j - i) , max_water);
                i++;
            }
            else max_water = max(heights[j]*(j - i) , max_water) , j--;
        }
        return max_water;
    }
};
