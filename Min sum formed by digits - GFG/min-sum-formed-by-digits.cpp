// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    
    long long int minSum(int arr[], int n)
    {
        long long int a=0;
        long long int b=0;
        int c=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int temp=arr[i];
            if(c==0)
            {
                a=(a*10)+temp;
                c=1;
            }else
            {
                b=b*10+temp;
                c=0;
            }
            
        }
        return (a+b);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends