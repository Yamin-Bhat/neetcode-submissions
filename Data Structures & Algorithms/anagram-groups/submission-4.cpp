class Solution {
public:
    void helper(vector<int> &count , string s){
        for(int i = 0 ; i < s.length() ; i++){
            count[(int)s[i] - 97]++;
        }
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<vector<int> , vector<string>> mp;
        int n = strs.size();
        for(int i = 0 ; i < n ; i++){
            vector<int> arr(26 , 0);
            helper(arr , strs[i]);
            mp[arr].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }

        return ans;

    }
};
