class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l_max = height[0];
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 0;
        for(int i = 1 ; i < n ; i++){
            left[i] = l_max;
            l_max = max(l_max , height[i]);
        }
        l_max = height[n  - 1];
        right[n - 1] = 0;
        for(int j = n - 2 ; j >= 0 ; j--){
            right[j] = l_max;
            l_max = max(l_max , height[j]);
        }
        int sum = 0;
        for(int k = 0 ; k < n ; k++){
            int ele = min(left[k] , right[k]) - height[k];
            if(ele < 0){
                height[k] = 0;
            }
            else height[k] = ele;

            sum += height[k];
        }
        return sum;
    }
};
