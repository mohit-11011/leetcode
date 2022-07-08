class Solution {
public:
    int fun(vector<int> v)
    {
        int sum=0;
        for(auto i:v)
        {
            sum+=i;
        }
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=max(sum,fun(accounts[i]));
        }
        return sum;
    }
};