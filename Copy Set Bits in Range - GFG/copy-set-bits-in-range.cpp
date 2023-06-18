//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    string binary(int n)
    {
        string ans;
        for(int i=0;i<30;i++)
        {
            ans+='0';
        }
        int i=1;
        while(n>0)
        {
            if(n%2==1)
            {
                ans[ans.size()-i]='1';
            }
            i++;
            n/=2;
            
        }
        return ans;
        
    }
    int decimal(string x)
    {
        int ans=0;
        for(int i=0;i<x.size();i++)
        {
            int temp;
            if(x[i]=='1')
            {
                temp=1;
            }
            else
            {
                temp=0;
            }
            ans=ans*2+temp;
        }
        return ans;
    }
    
    int setSetBit(int x, int y, int l, int r){
        // code here
        string a=binary(x);
        string b=binary(y);
        // cout<<a<<" "<<b<<endl;
        for(int i=l;i<=r;i++)
        {
            if(b[b.size()-i]=='1')
            {
                a[b.size()-i]='1';
            }
        }
        return decimal(a);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends