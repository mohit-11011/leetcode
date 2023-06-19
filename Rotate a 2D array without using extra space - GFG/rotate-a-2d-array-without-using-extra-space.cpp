//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void myfun(vector<vector<int>> &mat,int box){
    int n=mat.size();
    int startrow=box,startcol=box,endrow=n-box-1,endcol=n-box-1;
    for(int counter=0;counter<n-box*2-1;counter++){
        int temp=mat[endrow-counter][startcol];
        mat[endrow-counter][startcol]=mat[startrow][startcol+counter];
        int temp2=mat[endrow][endcol-counter];
        mat[endrow][endcol-counter]=temp;
        temp=temp2;
        temp2=mat[startrow+counter][endcol];
        mat[startrow+counter][endcol]=temp;
        temp=temp2;
        mat[startrow][startcol+counter]=temp;
    }  
}
	void rotateMatrix(vector<vector<int>>& inputArray, int n) {
	    for(int i=0;i<inputArray.size()/2;i++)
        myfun(inputArray,i);// code here   
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends