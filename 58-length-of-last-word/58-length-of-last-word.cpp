class Solution {
public:
    int lengthOfLastWord(string s) {
        bool space=false;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                space=true;
                continue;
            }
            if(space==false)
            {
                ans++;
            }
            else
            {
                ans=1;
                space=false;
            }
        }
        return ans;
        
    }
};