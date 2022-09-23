class Solution {
public:
    int fun(string x)
    {
        int ans=1;
        for(auto i:x)
        {
            if(i==' ')
                ans++;
        }
        return ans;
    }
    int mostWordsFound(vector<string>& sentences) {
       int maxi=INT_MIN;
        for(auto i:sentences)
        {
            maxi=max(maxi,fun(i));
        }
        return maxi;
    }
};