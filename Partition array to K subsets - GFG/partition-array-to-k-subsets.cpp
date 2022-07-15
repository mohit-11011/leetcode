// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  bool solve(long long int sum,vector<int> &visited,int currentsum,int k,int a[],int n)
  {
      if(k==1)
      {
          return true;
      }
      if(currentsum>sum)
      {
          return false;
      }
      if(currentsum==sum)
      {
          return solve(sum,visited,0,k-1,a,n);
      }
      for(int i=0;i<n;i++)
      {
          if(visited[i]==0)
          {
              visited[i]=1;
              if(solve(sum,visited,currentsum+a[i],k,a,n))
              {
                  return true;
              }
              visited[i]=0;
          }
      }
      return false;
  }
    bool isKPartitionPossible(int a[], int n, int k)
    {
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        if(k>n || sum%k!=0)
        {
            return false;
        }
        vector<int> visited(n,0);
        sum/=k;
        return solve(sum,visited,0,k,a,n);
         //Your code here
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
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends