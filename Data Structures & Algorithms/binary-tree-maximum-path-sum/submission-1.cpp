/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int helper(TreeNode* root , int &maxsum){
        if(root == NULL){
            return 0;
        }
        int left_sum = helper(root->left , maxsum);
        int right_sum = helper(root->right , maxsum);
        int sum = left_sum + right_sum + root->val;
        maxsum = max(sum , maxsum);
        if(root->val+left_sum<0&&root->val+right_sum<0){
            if(root->val<0)return 0;
            else root->val;
        }
        return max(root->val + left_sum , root->val + right_sum);
    }
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;
        helper(root , maxsum);
        return maxsum;
    }
};
