class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> mini(n,INT_MAX);
        vector<int> maxi(n,INT_MIN);
        mini[0]=prices[0];
        maxi[n-1]=prices[n-1];
        //int min=max=prices[0];
        for(int i=1;i<n;i++)
        {
            mini[i]=min(mini[i-1],prices[i]);
            
        }
        for(int i=n-2;i>=0;i--)
        {
            maxi[i]=max(maxi[i+1],prices[i]);
        }
        int profit=0;
        for(int i=0;i<n;i++)
        {
            int temp=maxi[i]-mini[i];
            profit=max(profit,temp);
        }
        return profit;
        
    }
};