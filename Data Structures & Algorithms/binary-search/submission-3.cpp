class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n - 1 , low = 0;
        int mid;

        if(n == 1 && target == nums[0]){
            return 0;
        }
        while(low <= high){
            mid = (high  + low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
