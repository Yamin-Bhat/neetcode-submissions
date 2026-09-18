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
    
    
    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int> arr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int level_size = q.size();
            TreeNode* right_most;
            while(level_size != 0){
                TreeNode* curr = q.front();
                q.pop();level_size--;
                right_most = curr;
                if(curr->left) {q.push(curr->left);}
                if(curr->right) {q.push(curr->right);}
            }
            arr.push_back(right_most->val);
        }


        return arr;

    }
};
