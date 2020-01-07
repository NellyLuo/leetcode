/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int val = root->val;
        stack<TreeNode*> nstack;
        nstack.push(root);
        while(!nstack.empty()){
            TreeNode* top = nstack.top();
            nstack.pop();
            if(top->val != val) return false;
            if(top->left!=nullptr)nstack.push(top->left);
            if(top->right!=nullptr)nstack.push(top->right);
        }
        return true;
    }
};
