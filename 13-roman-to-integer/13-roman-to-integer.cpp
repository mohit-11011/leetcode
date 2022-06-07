class Solution {
public:
    int romanToInt(string s) {
        s=s+'Z';
        int ans=0;
        char tempc=s[0];
        int temp=0;
        for(int i=0;i<s.length();i++)
        {
            if(tempc!=s[i])
            {
                if(val(s[i])>val(tempc))
                {
                    ans=ans-temp;
                    tempc=s[i];
                }
                else if (val(s[i])<val(tempc))
                {
                    ans=ans+temp;
                    tempc=s[i];
                }
                temp=0;
            }
            
                temp=temp+val(tempc);
            



        }
        return ans;
        
        
    }
    int val(char x)
    {
        int ans;
        if (x=='I')
        ans= 1;
        else if (x=='V')
        ans= 5;
        else if (x=='X')
        ans= 10;
        else if (x=='L')
        ans= 50;
        else if (x=='C')
        ans= 100;
        else if (x=='D')
        ans= 500;
        else if (x=='M')
        ans= 1000;
        else if (x=='Z')
        ans= 0;
        return ans;
    }
};