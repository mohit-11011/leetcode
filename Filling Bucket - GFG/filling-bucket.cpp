//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        vector<int> nums(N+1);
        if(N==0)
        {
            return 0;
        }
        if(N==1)
        {
            return 1;
        }
        if(N==2)
    {
        return 2;
    }
        nums[0]=0;
        nums[1]=1;
        nums[2]=2;
        for(int i=3;i<=N;i++)
        {
            nums[i]=(nums[i-1]+nums[i-2])%100000000;
        }
        return nums[N];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends