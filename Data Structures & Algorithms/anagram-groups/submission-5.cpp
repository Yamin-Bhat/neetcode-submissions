class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int> , vector<string>> mp;
        int n = strs.size();
        for(int i = 0 ; i < n ; i++){
            vector<int> count(26 , 0);
            for(int j = 0 ; j < strs[i].size() ; j++){
                count[(int)(strs[i][j] - 'a')]++;
            }
            
            mp[count].push_back(strs[i]);
            
        }

        for(auto p : mp){
            ans.push_back(p.second);
        }
        return ans;



        
    }
};
