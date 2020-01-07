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
    int deepestLeavesSum(TreeNode* root) {
        int result = 0;
        queue<TreeNode*> nqueue;
        nqueue.push(root);
        
        while(!nqueue.empty()){
            result = 0;
            int siz = nqueue.size();
            for(int i = 0; i < siz; i++){
                TreeNode* top = nqueue.front();
                result += top->val;
                nqueue.pop();
                
                if(top->left != nullptr)nqueue.push(top->left);
                if(top->right != nullptr)nqueue.push(top->right);
            }  
        }
        return result;
    }
};
