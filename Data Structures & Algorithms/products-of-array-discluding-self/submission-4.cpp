class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int n = nums.size();
        vector<int> output(n , 0);
        int ind = -1;
        int number = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                number++;
                if(number > 1){
                    return output;
                }
                ind = i;
                continue;
            }
            prod *= nums[i];
        }

        if(ind != -1){
            output[ind] = prod;
            return output;
        }
        for(int i = 0 ; i < n ; i++){
            output[i] = prod/nums[i];
        }

        return output;
    }
};
