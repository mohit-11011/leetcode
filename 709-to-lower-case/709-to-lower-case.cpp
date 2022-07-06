class Solution {
public:
    char fun(char x){
        if(x>='A' && x<='Z')
        {
            x=x-'A'+'a';
        }
        return x;
    }
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            s[i]=fun(s[i]);
        }
        return s;
    }
};