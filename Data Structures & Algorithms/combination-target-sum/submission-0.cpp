class Solution {
public:

    void helper(int i , vector<int> &curr , int total , vector<int> nums , int target , vector<vector<int>> &ans){
        if(total == target){
            ans.push_back(curr);
            return;
        }
        if(i >= nums.size() || total > target){
            return;
        }
        curr.push_back(nums[i]);
        helper(i , curr , total + nums[i] , nums , target , ans);

        curr.pop_back();
        helper(i + 1 , curr , total , nums , target , ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(0 , curr , 0 , nums , target , ans);
        return ans;
    }
};
