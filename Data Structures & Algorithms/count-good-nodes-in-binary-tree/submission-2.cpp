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
    // void helper(TreeNode* root , int &i , int max_val){
    //     if(!root){
    //         return;
    //     }
    //     if(root->val >= max_val){
    //         max_val = max(max_val , root->val);
    //         i++;
    //     }
    //     helper(root->left , i , max_val);
    //     helper(root->right , i , max_val);
    // }
    int goodNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        int count = 0;
        
        queue<pair<TreeNode* , int>> q;
        q.push({root , INT_MIN});
        while(!q.empty()){
            pair<TreeNode* , int> curr = q.front();
            q.pop();
            if(curr.second <= curr.first->val){
                count++;
            }
            if(curr.first->left){
                q.push({curr.first->left , max(curr.second , curr.first->val)});
            }
            if(curr.first->right){
                q.push({curr.first->right , max(curr.second , curr.first->val)});
            }
        }
        return count;
    }
};
