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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root, val);
        return root;
    }
    
    void insert(TreeNode* root, int val){
        if(NULL != root){
            if(root->val < val){
                if(!root->right){
                    root->right = new TreeNode(val);
                }
                else{
                    insert(root->right, val);
                }
            }
            if(root->val > val){
                if(!root->left){
                    root->left = new TreeNode(val);
                }
                else{
                    insert(root->left, val);
                }
            }
            
        }
        else{
            root = new TreeNode(val);
        }
    }
};
