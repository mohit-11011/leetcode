//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void myfun(string &s,int index,string output,set<string> &ans)
{
    if(index==s.size())
    {
        ans.insert(output);
        return;
    }
    for(int i=index;i<s.size();i++)
    {
        swap(output[index],output[i]);
        myfun(s,index+1,output,ans);
        swap(output[index],output[i]);
    }
}
		vector<string>find_permutation(string s)
		{
		    // Code 
		    set<string> ans;
    int index=0;
    string output=s;
    myfun(s,index,output,ans);
    vector<string> abc;
    for(auto temp:ans)
    {
        abc.push_back(temp);
        
    }
    return abc;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends