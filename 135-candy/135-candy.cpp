class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1)
            return 1;
        vector<int> candy(n,1);
        if(ratings[0]>ratings[1])
        {
            candy[0]++;
        }
        for(int i=1;i<=n-2;i++)
        {
            if(ratings[i]>ratings[i-1]   && ratings[i]<=ratings[i+1])
            {
                candy[i]=candy[i-1]+1;
            }
            if(ratings[i]<=ratings[i-1]   && ratings[i]>ratings[i+1])
            {
                candy[i]=candy[i+1]+1;
            }
            if(ratings[i]>ratings[i-1]   && ratings[i]>ratings[i+1])
            {
                candy[i]=max(candy[i-1],candy[i+1])+1;
            }       
        } 
        for(int j=n-1;j>0;j--)
                {
                    if(ratings[j-1]>ratings[j])
                    {
                        candy[j-1]=max(candy[j]+1,candy[j-1]);
                    }
                    
                }
        if(ratings[n-1]>ratings[n-2])
        {
            candy[n-1]=candy[n-2]+1;
        }
        int sum=0;
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            sum+=candy[i];
        }
        return sum;
    }
};