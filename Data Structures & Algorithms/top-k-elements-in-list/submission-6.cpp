class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int , int> u_mp;

        for(int i = 0 ; i < nums.size() ; i++){
            u_mp[nums[i]]++;
        }
        multimap<int , int> mp;
        for(auto p : u_mp){
            mp.emplace(p.second , p.first);
        }
        int track = 0;
        vector<int> ans;
        for(auto p = mp.rbegin() ; p != mp.rend() ; ++p){
            if(track == k){
                return ans;
            }
            ans.push_back(p->second);
            track++;
        }
        return ans;
    }
};
