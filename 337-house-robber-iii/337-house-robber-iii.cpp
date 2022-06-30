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
    pair<int,int> include_exclude(TreeNode* root)
    {
        if(root==NULL)
        {
            return make_pair(0,0);
        }
        if(root->left==NULL && root->right==NULL)
        {
            return make_pair(root->val,0);
        }
        pair<int,int> s;
        pair<int,int> left=include_exclude(root->left);
        pair<int,int> right=include_exclude(root->right);
        s.first=left.second+right.second+root->val;
        s.second=max(left.second,left.first)+max(right.second,right.first);
        return s;
    }
    int rob(TreeNode* root) {
        pair<int,int> s=include_exclude(root);
        return max(s.first,s.second);
    }
};