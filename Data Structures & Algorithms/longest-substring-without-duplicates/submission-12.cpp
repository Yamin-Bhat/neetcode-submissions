class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> mp;
        int n = s.length();
        int i = 0 , j = 0;
        int len = 0;
        
        while(j < n){
                while(mp.find(s[j]) != mp.end()){
                    mp.erase(s[i]);
                    i++;
                }
            
            len = max(len , j - i + 1);
            mp[s[j]] = j;
            j++;
            
        }
        return len;
    }
};
