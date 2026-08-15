class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0 , j = n - 1;
        vector<int> ans(2);

        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(numbers[i] == numbers[j]){
                i++;
            }
            if(sum == target){
                return ans = {i + 1 , j + 1};
            }
            if(sum < target){
                i++;
            }
            if(sum > target){
                j--;
            }
        }
        return ans;
    }
};
