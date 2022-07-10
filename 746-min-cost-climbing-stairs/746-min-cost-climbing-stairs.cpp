class Solution {
public:
    int solve(vector<int> &cost,vector<int> &dp,int n)
    {
        if(n==0 || n==1)
        {
            return cost[n];
        }
        else
        {
            if(dp[n]!=-1)
            {
                return dp[n];
            }
            else
            {
                int temp=cost[n]+min(solve(cost,dp,n-1),solve(cost,dp,n-2));
                dp[n]=temp;
                return temp;
            }
        }
        
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        vector<int> dp(n+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
       return solve(cost,dp,n);
        
    }
};