//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
  public:
  int solve(string &s,int i,int j)
  {
      if(i>j)
      return 0;
      if(i==j)
      return 1;
      if(i>=s.size() || j<=0)
      return 0;
      
      if(s[i]==s[j])
      return 2+solve(s,i+1,j-1);
      else
      return max(solve(s,i+1,j),solve(s,i,j-1));
      
  }
  int solvemem(string &s,int i,int j,vector<vector<int>> &dp)
  {
      if(i>j)
      return 0;
      if(i==j)
      return 1;
      if(i>=s.size() || j<=0)
      return 0;
      
      if(dp[i][j]!=-1)
      {
          return dp[i][j];
      }
      
      if(s[i]==s[j])
      return dp[i][j]=2+solvemem(s,i+1,j-1,dp);
      else
      return dp[i][j]=max(solvemem(s,i+1,j,dp),solvemem(s,i,j-1,dp));
  }
    int longestPalinSubseq(string A) {
        //code here
        // return solve(A,0,A.size()-1);
        
        vector<vector<int>> dp(A.size()+1,vector<int> (A.size()+1,-1));
        return solvemem(A,0,A.size()-1,dp);
        
        
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends