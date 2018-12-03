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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return isFilp(root1, root2);
    }
    
    bool isFilp(TreeNode* root1, TreeNode* root2){
        if( NULL==root1 && NULL==root2)
            return true;
        if((NULL==root1 && NULL!=root2) || (NULL!=root1 && NULL==root2))
            return false;
        if(root1->val == root2->val){
            // cout << root1->val << '\t' << root2->val << endl;
            if(isFilp(root1->left,root2->left)){
                return isFilp(root1->right,root2->right);
            }
            if(isFilp(root1->left,root2->right)){
                return isFilp(root1->right,root2->left);
            }
            return false;
        }  
        return false;
    }
};
