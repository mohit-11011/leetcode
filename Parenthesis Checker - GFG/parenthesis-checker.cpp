//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char> map;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[' || s[i]=='{' || s[i]=='(')
            {
                map.push(s[i]);
            }
            else
            {
                if(map.empty())
                return false;
                if(s[i]==']' && map.top()=='[')
                {
                    map.pop();
                }
                else if(s[i]==')' && map.top()=='(')
                {
                    map.pop();
                }
                else if(s[i]=='}' && map.top()=='{')
                {
                    map.pop();
                }
                else
                {
                    return false;
                }
                
            }
        }
        return map.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends