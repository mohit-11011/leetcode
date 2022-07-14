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
    int bs(vector<int> &inorder,int x)
    {
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==x)
            {
                return i;
            }
        }
        return 0;
        
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int &index,int start,int end,int n)
    {
        if(index>=n || start>end)
        {
            return NULL;
        }
        else
        {
            int element=preorder[index++];
            TreeNode* node=new TreeNode(element);
            int temp=bs(inorder,element);
            node->left=solve(preorder,inorder,index,start,temp-1,n);
            node->right=solve(preorder,inorder,index,temp+1,end,n);
            return node;
            
        }
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int index=0;
        return solve(preorder,inorder,index,0,n-1,n);
        
    }
};