class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> mp(begin(nums) , end(nums));

        int longest = 0;
        
        for(auto p : mp){
            if(mp.find(p - 1) == mp.end()){
                int len = 1;
                while(mp.find(p + len) != mp.end()){
                    len++;
                }
                longest = max(len , longest);
            }
        }
        return longest;
    }
};
