class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=0;i<columnTitle.size();i++)
        {
            ans=ans*26;
            char temp=columnTitle[i];
            int x=int(temp-'A'+1);
            ans=ans+x;
            
        }
        return ans;
    }
};