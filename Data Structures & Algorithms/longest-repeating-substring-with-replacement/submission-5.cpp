class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int> mp;
        int i = 0 , j = 0;
        int n = s.length();
        int max_freq = INT_MIN;
        int max_len = INT_MIN;
        while(i <= j && j < n){
            mp[s[j]]++;
            for(auto m : mp){
                if(m.second > max_freq){
                    max_freq = m.second;
                }
                
            }
            if((j - i + 1) - max_freq == k){
                    max_len = max(max_len , j - i + 1);
                    j++;
                    continue;
                    
            }
            if((j - i + 1) - max_freq > k){
                
                    mp[s[i]]--;
                    i++;
                    j++;
                    continue;
                    
            }
             
            j++;
        }
        if(max_len == INT_MIN){
            return n;
        }
        return max_len;
    }
};
