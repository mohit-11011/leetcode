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
    void solve(TreeNode* root,map<int,int> &m,int val)
    {
        if(root==NULL)
        {
            return ;
        }
        if(m.find(val)==m.end())
        {
            m[val]=root->val;
        }
        solve(root->right,m,val+1);
        solve(root->left,m,val+1);
        
        
    }
    vector<int> rightSideView(TreeNode* root) {
        map<int,int> m;
        solve(root,m,0);
        vector<int> ans;
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};