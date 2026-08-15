class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int , int> mp;

        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> freq_mp(n + 1);

        for(auto p : mp){
            freq_mp[p.second].push_back(p.first);
        }
        
        vector<int> ans;
        for(int i = n ; i >= 0 ; i--){
            if(freq_mp[i].size() == 0){
                continue;
            }
            for(int j = 0 ; j < freq_mp[i].size() ; j++){
                if(ans.size() == k){
                    return ans;
                }
                ans.push_back(freq_mp[i][j]);
            }
        }
        return ans;
    }
};
