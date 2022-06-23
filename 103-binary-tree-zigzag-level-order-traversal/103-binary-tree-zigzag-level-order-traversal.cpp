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
     void solve(TreeNode * root,queue<TreeNode*> q,vector<int> &temp,vector<vector<int>> & ans)
    {
        int ltr=0;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* top=q.front();
            q.pop();
            if(top==NULL)
            {
                ans.push_back(temp);
                if(q.empty())
                    return;
                else
                    temp.clear();
                    q.push(NULL);
                    if(ltr)
                        ltr=0;
                    else
                        ltr=1;
            }
            else
            {
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
                if(ltr==0)
                temp.push_back(top->val);
                else
                    temp.insert(temp.begin(),top->val);
            }
        }
    }
   
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        if(root==NULL)
            return ans;
        solve(root,q,temp,ans);
        return ans;
    }
};

 