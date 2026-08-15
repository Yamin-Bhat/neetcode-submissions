class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        vector<int> arr;
        while(i < nums.size() - 1){
            if(i > 0 && nums[i] == nums[i - 1]){
                i++;
                continue;
            }
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                if(j > i + 1 && nums[j] == nums[j - 1]){
                    j++;
                    continue;
                }
                if(k < nums.size() - 1 && nums[k] == nums[k + 1]){
                    k--;
                    continue;
                }
                if(nums[j] + nums[k] < (-nums[i])){
                    j++;
                    continue;
                }
                if(nums[j] + nums[k] > (-nums[i])){
                    k--;
                    continue;
                }
                arr = {nums[i] , nums[j] , nums[k]};
                ans.push_back(arr);
                j++;
                k--;
            }
            i++;
        }
        return ans;
    }
};
