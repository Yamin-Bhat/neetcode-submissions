class Solution {
public:
    bool isanagram(string &s1 , string &s2){
        unordered_map<char , int> mp;
        for(int i = 0 ; i < s1.size() ; i++){
            mp[s1[i]]++;
        }
        for(int j = 0 ; j < s2.size() ; j++){
            mp[s2[j]]--;
        }
        for(auto p : mp){
            if(p.second != 0){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int flag = 0;
        ans.push_back({strs[0]});
        for(int i = 1 ; i < strs.size(); i++){
            for(auto &s : ans){
                if(isanagram(strs[i] , s[0]) == true){
                    flag = 1;
                    s.push_back(strs[i]);
                    break;
                }
            }
            if(flag == 0){
                ans.push_back({strs[i]});
            }
            flag = 0;
        }
        return ans;
    }
};
