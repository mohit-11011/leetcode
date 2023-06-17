//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        int counter=1;
        int ans=-1;
        bool set=false;
        while(N>0)
        {
            if(N%2==1)
            {
                if(!set)
                {
                    ans=counter;
                    set=true;
                }
                else
                return -1;
            }
            N=N/2;
            counter++;
        }
        return ans;
        // code here
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
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends