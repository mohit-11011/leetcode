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
    
    int fun(TreeNode* root,int &sum)
    {
        
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return root->val;
        }
        int a=fun(root->left,sum);
        int b=fun(root->right,sum);
        // int temp=a+b+root->val;
        // root->val=abs(a-b);
        // return temp;
        sum+=abs(a-b);
        return root->val+a+b;
        
        
    }
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum=0;
        int a=fun(root->left,sum);
        int b=fun(root->right,sum);
        cout<<a<<" "<<b<<endl;
        
        return abs(a-b)+sum;
        
    }
};