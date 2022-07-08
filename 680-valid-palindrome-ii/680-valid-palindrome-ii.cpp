class Solution {
public:
    bool fun(string s,int remove,int j)
    {
        int i=0;
        int n=j+1;
        while(i<n && j>=0)
        {
            if(i==remove)
            {
                i++;
                continue;
            }
            if(j==remove)
            {
                j--;
                continue;
            }
            if(s[i]!=s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
       int i=0;
       int j=s.size()-1;
        int a,b;
        bool pass=true;
        for(int i=0;i<((j+1)/2);i++ )
        {
            if(s[i]!=s[j-i])
            {
                pass=false;
                a=i;
                b=j-i;
                break;
            }
        }
        if(pass)
        {
            return true;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
            
            return (fun(s,a,j)||fun(s,b,j));
        }
    }
};