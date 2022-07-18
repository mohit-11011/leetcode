class Solution {
public:
    void f(vector<int> &arr,string s)
    {
        int n=s.size();
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }
    }
    bool isAnagram(string s, string t) {
        vector<int> s1(26,0);
        vector<int> t1(26,0);
        f(s1,s);
        f(t1,t);
        return s1==t1;
    }
};