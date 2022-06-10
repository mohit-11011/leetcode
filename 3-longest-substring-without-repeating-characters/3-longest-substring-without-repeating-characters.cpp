class Solution {
public:
    bool insidestring(char s,string temp)
    {
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==s)
            {
                return true;
            }
        }
        return false;
        
    }
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        int max=0;
       int ans=1;
        string temp;
        for(int i=0;i<s.size();i++)
        {
            temp=temp+s[i];
            for(int j=i+1;j<s.size();j++)
            {
                if(insidestring(s[j],temp))
                {
                    temp="";
                    if(ans>max)
                    {
                        max=ans;
                    }
                    ans=1;
                    break;
                    
                }
                else
                {
                    ans++;
                    temp=temp+s[j];
                }                
            }
            if(ans>max)
            {
                max=ans;
            }
            
            if(max>=95)
            {
                return max;
            }
            ans=1;
            temp="";
        }
        return max;
        
        
    }
};