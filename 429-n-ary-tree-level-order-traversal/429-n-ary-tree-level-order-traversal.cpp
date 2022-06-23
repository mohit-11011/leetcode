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
     void solve(Node * root,queue<Node*> q,vector<int> &temp,vector<vector<int>> & ans)
    {
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node* top=q.front();
            q.pop();
            if(top==NULL)
            {
                ans.push_back(temp);
                if(q.empty())
                    return;
                else
                    temp.clear();
                    q.push(NULL);
                    
            }
            else
            {
                int n=top->children.size();
                for(int i=0;i<n;i++)
                {
                     q.push(top->children[i]);
                }
                temp.push_back(top->val);
            }
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        
        
        vector<vector<int>> ans;
        vector<int> temp;
        queue<Node*> q;
        if(root==NULL)
            return ans;
        solve(root,q,temp,ans);
        return ans;
    }
};