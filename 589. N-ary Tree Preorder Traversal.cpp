/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root == nullptr){
            vector<int> res;
            return res;
        }
        
        stack<Node*> nstack;
        vector<int> res;
        
        nstack.push(root);
        while(!nstack.empty()){
            Node* top = nstack.top();
            res.push_back(top->val);
            nstack.pop();
            
            for (int i = top->children.size() - 1;i>=0;i--){
                if(top->children[i]!=nullptr){
                    nstack.push(top->children[i]);
                }
            }

        }
        return res;
    }
};
