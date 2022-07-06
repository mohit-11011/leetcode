class Solution {
public:
    bool islower(char x)
    {
        return (x>='a' && x<='z');
    }
    bool isupper(char x)
    {
        return (x>='A' && x<='Z');
    }
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(n==1)
        {
            return true;
        }
        else
        {
            char second=word[1];
            bool ans;
            if(islower(second))
            {
                for(int i=2;i<n;i++)
                {
                    if(isupper(word[i]))
                    {
                        return false;
                    }
                }
                return true;
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(islower(word[i]))
                    {
                        return false;
                    }
                }
                return true;
            }
        }
    }
};