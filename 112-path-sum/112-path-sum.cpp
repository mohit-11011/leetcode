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
    void solve(TreeNode* root,int &reqds,int currs,bool &finalans)
    {
        if(finalans==true)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            currs=currs+root->val;
            if(currs==reqds)
            {
                finalans=true;
                return;
            }
            else
            {
                return;
            }
        }
        if(root->left!=NULL && root->right==NULL)
        {
            solve(root->left,reqds,currs+root->val,finalans);
        }
        if(root->right!=NULL && root->left==NULL)
        {
            solve(root->right,reqds,currs+root->val,finalans);
        }
        if(root->right!=NULL && root->left!=NULL)
        {
            solve(root->left,reqds,currs+root->val,finalans);
            solve(root->right,reqds,currs+root->val,finalans);
            
        }
        
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        bool finalans=false;
        solve(root,targetSum,0,finalans);
        return finalans;
    }
};