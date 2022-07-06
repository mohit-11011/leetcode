class Solution {
public:
    char upper(char x)
    {
         if(x>='a' && x<='z')
        {
            x=x+'A'-'a';
        }
        return x;
    }
     char fun(char x){
        if(x>='A' && x<='Z')
        {
            x=x-'A'+'a';
        }
        return x;
    }
    string word(string s)
    {
        int n=s.size();
        if(n==0)
            return s;
        if(n==1 || n==2)
        {
            for(int i=0;i<n;i++)
            {
                s[i]=fun(s[i]);
            }
        return s;        
        }
        else
        {
            s[0]=upper(s[0]);
            for(int i=1;i<n;i++)
            {
                s[i]=fun(s[i]);
            }
            return  s;
            
        }
    }
    string capitalizeTitle(string title) {
        title=title+' ';
        string temp;
        string ans;
        int n=title.size();
        for(int i=0;i<n;i++)
        {
            if(title[i]!=' ')
            {
                temp=temp+title[i];
            }
            else
            {
                ans+=word(temp)+" ";
                temp="";
            }
        }
        ans.pop_back();
        return ans;
        
    }
};