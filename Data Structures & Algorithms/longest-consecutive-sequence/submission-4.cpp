class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin() ,  nums.end());
        int ans = INT_MIN;
        int len = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[i - 1]){
                continue;
            }
            if(nums[i] != nums[i - 1] + 1){
                ans = max(len , ans);
                len = 1;
                continue;
                
            }
            len++;
        }
        return max(ans , len);
    }
};
