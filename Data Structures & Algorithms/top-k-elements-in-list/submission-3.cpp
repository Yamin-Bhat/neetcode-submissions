class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(auto n : nums){
            mp[n]++;
        }
        set<pair<int , int>> s;
        for(auto p : mp){
            s.insert({p.second , p.first});
        }
        int track = 0;
        vector<int> ans;
        for(auto it = s.rbegin() ; it != s.rend() ; ++it){
            
            ans.push_back((*it).second);
            track++;
            if(track == k){
                break;
            }
        }
        return ans;
    }
};
