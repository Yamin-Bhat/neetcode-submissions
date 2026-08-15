class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            if(mp.find(nums[i]) != mp.end()){
                ans = {mp[nums[i]] , i};
                return ans;
            }
            mp[target - nums[i]] = i;
        }
        return ans;
    }
};
