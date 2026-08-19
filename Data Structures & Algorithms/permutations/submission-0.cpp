class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() == 0){
            return {{}};
        }
        vector<int> c_nums(nums.begin() + 1 , nums.end());
        vector<vector<int>>permus = permute(c_nums);
        vector<vector<int>> ans;
        for(auto p : permus){
            for(int i = 0 ; i < p.size() + 1 ; i++){
                vector<int> dup = p;
                dup.insert(dup.begin() + i , nums[0]);
                ans.push_back(dup);
            }
        }
        return ans;
    }
};
