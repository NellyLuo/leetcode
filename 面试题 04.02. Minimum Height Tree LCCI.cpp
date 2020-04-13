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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums, 0, nums.size()-1);
    }

    TreeNode* dfs(const vector<int> &nums, int left, int right){
        if(left > right) return nullptr;

        int mid = (left + right) >> 1;
        TreeNode* p =  new TreeNode(nums[mid]);
        p->left = dfs(nums, left, mid - 1);
        p->right = dfs(nums, mid+1, right);
        return p;
    }
};
