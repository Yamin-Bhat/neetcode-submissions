class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        if(n == 0){
            return 0;
        }
        int l = 0 , r = n - 1;

        int ans = 0;
        int left = height[0] , right = height[n - 1];
        while(l < r){
            if(left < right){
                l++;
                left = max(left , height[l]);
                ans += left - height[l];
            }
            else{
                r--;
                right = max(right , height[r]);
                ans += right - height[r];
            }
        }

        return ans;
    }
};
