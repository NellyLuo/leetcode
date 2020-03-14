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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int cur_size = q.size();
            for(int i=0;i<cur_size;i++){
                TreeNode* t = q.front();
                q.pop();
                if(i == cur_size - 1) result.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return result;
    }
};
