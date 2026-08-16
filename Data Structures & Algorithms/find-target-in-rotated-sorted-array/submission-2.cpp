class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        int low = 0 , high = n - 1;
        int mid;

        while(low <= high){
            mid = (high + low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        int pivot = low;

        low = 0 , high = pivot - 1;
        while(low <= high){
            mid = (high + low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            else high = mid - 1;
        }

        low = pivot + 1 , high = n - 1;
        while(low <= high){
            mid = (high + low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            else high = mid - 1;
        }

        return -1;
    }
};
