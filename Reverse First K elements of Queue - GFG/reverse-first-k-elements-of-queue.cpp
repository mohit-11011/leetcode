//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
void revi(queue<int> &q,int &k)
    {
        if(q.empty()|| k==0)
        {
            return;
        }
        int x=q.front();
        q.pop();
        k--;
        revi(q,k);
        q.push(x);
    }
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    // cout<<k<<endl;
       int temp=q.size()-k;
    revi(q,k);
 
    // cout<<temp<<endl;
    // temp=temp-k;
    // cout<<temp<<endl;
    for(int i=0;i<temp;i++)
    {
        int x=q.front();
        q.push(x);
        q.pop();
    }
        return q;
}