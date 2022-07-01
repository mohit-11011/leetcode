class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int r=n%3;
        int sum=0;
        if(r==1)
        {
            sum+=cost[0];
        }
        else if(r==2)
        {
            sum+=cost[0]+cost[1];
        }
        for(int i=n-1;i>=r;i=i-3)
        {
            sum+=cost[i]+cost[i-1];
        }
        return sum;
    }
};