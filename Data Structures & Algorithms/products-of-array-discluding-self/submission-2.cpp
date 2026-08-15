class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size()) , sufix(nums.size());
        int pre = 1;
        prefix[0] = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            pre *= nums[i - 1];
            prefix[i] = pre;
        }
        int suf = 1;
        sufix[nums.size() - 1] = 1;
        for(int j = nums.size() - 2 ; j >= 0 ; j--){
            suf *= nums[j + 1];
            sufix[j] = suf;
        }
        vector<int> ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i] = prefix[i] * sufix[i];
        }
        return ans;
    }
};
