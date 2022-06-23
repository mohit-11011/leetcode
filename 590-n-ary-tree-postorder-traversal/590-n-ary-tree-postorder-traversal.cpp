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
    void solve(Node* node,vector<int> &ans){
        if (node==NULL)
        {
            return ;
        }
        
        int n=node->children.size();
        for(int i=0;i<n;i++)
        {
            solve(node->children[i],ans);
        }
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};
