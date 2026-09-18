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
    void helper(TreeNode* root , int &i , int max_val){
        if(!root){
            return;
        }
        if(root->val >= max_val){
            max_val = max(max_val , root->val);
            i++;
        }
        helper(root->left , i , max_val);
        helper(root->right , i , max_val);
    }
    int goodNodes(TreeNode* root) {
        int i = 0;
        int max_val = INT_MIN;
        helper(root , i , max_val);
        return i;
    }
};
