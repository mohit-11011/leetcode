/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* node)
    {
        if (node==NULL)
            return 0;
        else
        {
            return 1+max(height(node->left),height(node->right));
        }
    }
    void solve(TreeNode * root,queue<TreeNode*> q,vector<int> &temp,vector<vector<int>> & ans)
    {
        int h=height(root);
        //cout<<h<<endl;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* top=q.front();
            q.pop();
            if(top==NULL)
            {
                ans.insert(ans.begin(),temp);
                if(q.empty())
                    return;
                else
                    temp.clear();
                    q.push(NULL);
                
            }
            else
            {
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
                    temp.push_back(top->val);
            }
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        if(root==NULL)
            return ans;
        solve(root,q,temp,ans);
        return ans;
    }
};
