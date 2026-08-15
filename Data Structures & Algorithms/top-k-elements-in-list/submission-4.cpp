class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(auto n : nums){
            mp[n]++;
        }
        int n = nums.size();
        vector<vector<int>> arr(n + 1);
        for (auto p : mp){
            arr[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i = arr.size() - 1 ; i >=0 ; i--){
            for(int n : arr[i]){
                ans.push_back(n);
            }
            if(ans.size() == k){
                return ans;
            }
        }
        return ans;
    }
};
