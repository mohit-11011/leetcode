class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=cardPoints[i];
        }
        //cout<<"sum"<<sum<<endl;
        int windowsize=n-k;
        int sumreduce=0;
        int min=INT_MAX;    
        for(int i=0;i<windowsize;i++)
        {
            sumreduce+=cardPoints[i];
        }
        //cout<<"sumreduce "<<sumreduce<<endl;
        if(sumreduce<min)
        {
            min=sumreduce;
        }
        for(int i=windowsize;i<n;i++)
        {
            sumreduce+=cardPoints[i]-cardPoints[i-windowsize];
           // cout<<"sumreduce "<<sumreduce<<endl;
            if(sumreduce<min)
        {
            min=sumreduce;
        }
        }
        return sum-min;
    }
};