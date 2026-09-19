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
    void traverse(TreeNode*root,int &cnt,int &el){
        if(!root)return;
        if(el!=-1)return;
        traverse(root->left,cnt,el);
        cnt--;
        if(cnt==0){
            el=root->val;
            return;
        }
        traverse(root->right,cnt,el);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=k;
        int el=-1;
        traverse(root,cnt,el);
        return el;
    }
};
