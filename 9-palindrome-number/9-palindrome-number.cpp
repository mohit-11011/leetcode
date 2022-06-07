class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=true;
        stringstream ss;
        ss<<x;
        string s;
        ss>>s;
        int len=s.length();
        for(int i=0;i<=(len/2);i++)
        {
            if(s[i]!=s[len-1-i])
            {
                ans=false;
                break;
            }
        }
       return ans;
    }
};