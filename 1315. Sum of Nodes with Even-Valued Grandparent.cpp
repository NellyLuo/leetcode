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
    int sumEvenGrandparent(TreeNode* root) {
        return sumVal(root);
    }
    
    int sumVal(TreeNode* root){
        int result = 0;
        stack<TreeNode*> s;
        s.push(root);
        
        while(!s.empty()){
            TreeNode* top = s.top();
            s.pop();
            
            if(top->left != NULL){
                s.push(top->left);
                
                if(top->val % 2 == 0){
                    if(top->left->left != NULL){
                        result += top->left->left->val;
                    }
                    if(top->left->right != NULL){
                        result += top->left->right->val;
                    }
                }
                
            }
            if(top->right != NULL){
                s.push(top->right);
                
                if(top->val % 2 == 0){
                    if(top->right->left != NULL){
                        result += top->right->left->val;
                    }
                    if(top->right->right != NULL){
                        result += top->right->right->val;
                    }
                }
                
            }
        }
        return result;
    }
};
