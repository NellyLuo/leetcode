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
    vector<TreeNode*> generateTrees(int n) {
		if(!n) return {};
		return track(1,n);
    }


	vector<TreeNode*> track(int start,int end){
		vector<TreeNode*> res;
		if(start > end) res.push_back(nullptr);
		else if(start == end) res.push_back(new TreeNode(start));
		else{
			for(int i=start;i<=end;i++){
				vector<TreeNode*> l = track(start,i-1);
				vector<TreeNode*> r = track(i+1,end);
				for(int j=0;j<l.size();j++){
					for(int k=0;k<r.size();k++){
						TreeNode* h = new TreeNode(i);
						h->left = l[j];
						h->right = r[k];
						res.push_back(h);
					}
				}
			}
		}
		return res;
	}
};
