class Solution {
public:
    void solve(vector<string> &ansvec,string ans,stack<char> s,int n,int len)
    {
        if(ans.length()==2*n)
        {
            ansvec.push_back(ans);
            return ;
        }
        if(len==n)
        {
            while(ans.length()!=2*n)
            {
                ans=ans+')';
            }
            ansvec.push_back(ans);
            return;
        }
        if(s.empty())
        {
            ans=ans+'(';
            len++;
            s.push('(');
            solve(ansvec,ans,s,n,len);
        }
        if(s.top()=='(' && len<n)
        {
            string copy=ans;
            copy=copy+'(';
            len++;
            s.push('(');
            solve(ansvec,copy,s,n,len);
            
            
            ans=ans+')';
            s.pop();
            s.pop();
            len--;
            solve(ansvec,ans,s,n,len);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        stack<char> st;
        if(n==0)
            return ans;
        solve(ans,temp,st,n,0);
        set<string> setstring;
        for(int i=0;i<ans.size();i++)
        {
            setstring.insert(ans[i]);
        }
        ans.clear();
        set<string> ::iterator itr;
        for(itr=setstring.begin();itr!=setstring.end();itr++)
        {
            ans.push_back(*itr);
        }
        return ans;
    }
};