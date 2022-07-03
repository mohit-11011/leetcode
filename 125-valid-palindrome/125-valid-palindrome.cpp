class Solution {
public:
    char final(char x)
    {
        if(x>='A' && x<='Z')
        {
            return char(x-'A'+'a');
        }
        return x;
        
    }
    bool issafe(char x)
    {
        if(x>='A' && x<='Z')
        {
            return true;
        }
        if(x>='a' && x<='z')
        {
            return true;
        }
        if(x>='0' && x<='9')
        {
            return true;
            
        }
        return false;
    }
    bool isPalindrome(string s) {
//         string temp;
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]>='A' && s[i]<='Z')
//             {
//                 temp=temp+char(s[i]-'A'+'a');
//             }
//             if(s[i]>='a' && s[i]<='z')
//             {
//                 temp=temp+s[i];
//             }
//             if(s[i]>='0' && s[i]<='9')
//             {
//                 temp=temp+s[i];
//             }
//         }
//         cout<<temp;
//         int n=temp.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(temp[i]!=temp[n-i-1])
//                 return false;
//         }
//         return true;
        
        
        
        
        
        
        
        
    
    
        int i=0;
        int j=s.size();
        int n=j;
        j--;
        cout<<j<<endl;
        while(i<n && j>=0)
        {
            if(!issafe(s[i]))
            {
                cout<<"i incrementing"<<endl;
                i++;
                continue;
            }
            if(!issafe(s[j]))
            {
                cout<<"j decreasing "<<s[j]<<endl;
                j--;
                continue;
            }
            if(final(s[i])!=final(s[j]))
            {
                cout<<"fail "<<i<<" "<<j<<endl;
                return false;
            }
            else
            {
                cout<<i<<" "<<j<<endl;
                i++;
                j--;
            }
            
        }
        return true;
    }
};