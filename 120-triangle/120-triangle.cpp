class Solution {
public:
    int fun(vector<vector<int>>& triangle,int i,int j)
    {
        if(i==triangle.size()-1)
        {
            return triangle[i][j];
        }
        else
        {
            return triangle[i][j]+min(fun(triangle,i+1,j),fun(triangle,i+1,j+1));
        }
        
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> dp(n,0);
        //return fun(triangle,0,0);
        for(int i=0;i<n;i++)
        {
            dp[i]=triangle[n-1][i];
        }
        for(int i =n-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                  dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);        
            }
        }
        return dp[0];
    }
};