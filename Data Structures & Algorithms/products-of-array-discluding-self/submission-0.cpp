class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero_count = 0;
        int idx;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                zero_count++;
                idx = i;
            }
        }
        vector<int> ans(nums.size() , 0);
        if(zero_count > 1){
            return ans;
        }
        else if(zero_count == 1){
            int prod = 1;
            for(int n : nums){
                if(n == 0){
                    continue;
                }
                prod *= n;
            }
            ans[idx] = prod;
            return ans;
        }
        int prod = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            prod *= nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i] = prod/nums[i];
        }
        return ans;
    }
};
