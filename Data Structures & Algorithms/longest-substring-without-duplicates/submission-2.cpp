class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> mp;
        int i = 0 , j = 0;
        int lon_len = 0;
        while( j < s.size()){
            if(mp.find(s[j]) != mp.end() ){
                i = max(i , mp[s[j]] + 1);
            }
            lon_len = max(lon_len , j - i + 1);
            mp[s[j]] = j;
            j++;
            
            
            
        }
        return lon_len;
    }
};
