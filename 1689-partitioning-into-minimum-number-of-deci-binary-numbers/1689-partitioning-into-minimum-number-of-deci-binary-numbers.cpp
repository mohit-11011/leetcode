class Solution {
public:
    int valchar(char x)
    {
        return x-'0';
    }
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++)
        {
            if (valchar(n[i])>ans)
            {
                ans=valchar(n[i]);
            }
        }
        return ans;
        
    }
};