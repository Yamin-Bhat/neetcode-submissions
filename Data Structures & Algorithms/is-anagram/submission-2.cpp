class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char  , int> mp;
        int n = s.size();
        int m = t.size();

        if(n != m){
            return false;
        }

        for(int i = 0 ; i < n ; i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto p : mp){
            if(p.second != 0){
                return false;
            }
        }
        return true;
    }
};
