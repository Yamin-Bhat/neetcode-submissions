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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            while(size != 0){
                TreeNode* front = q.front();q.pop();
                temp.push_back(front->val);
                if(front->left != nullptr){
                    q.push(front->left);
                }
                if(front->right != nullptr){
                    q.push(front->right);
                }
                size--;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
