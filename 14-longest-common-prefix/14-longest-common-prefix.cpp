class Solution {
public:
    int min(int a,int b)
    {
        return  a<b?a:b;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int minsize=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
             minsize=min(strs[i].size(),minsize);
        }
        for(int i=0;i<minsize;i++)
        {
            char temp=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(temp!=strs[j][i])
                {
                    return ans;
                }
                
                
            }
            ans=ans+temp;
        }
        return ans;
        
    }
};