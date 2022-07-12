class Solution {
public:
    void solve(int a,int b,int c,int d,int index,bool &ans,int n,vector<int>& matchsticks,int &sum)
    {
        if(ans==true)
        {
            return;
        }
        if(index==n)
        {
         ans= (a==b && c==d && b==c);
            return;
            
        }
        else
        {
            int x=matchsticks[index];
            if((a+x)<=(sum/4))
            solve(a+x,b,c,d,index+1,ans,n,matchsticks,sum);
            
            if((b+x)<=(sum/4))
            solve(a,b+x,c,d,index+1,ans,n,matchsticks,sum);
            
            if((c+x)<=(sum/4))
            solve(a,b,c+x,d,index+1,ans,n,matchsticks,sum);
            
            if((d+x)<=(sum/4))
            solve(a,b,c,d+x,index+1,ans,n,matchsticks,sum);
        }
    }
        
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        int n=matchsticks.size();
        for(int i=0;i<n;i++)
        {
            sum+=matchsticks[i];
        }
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        bool ans=false;
       solve(0,0,0,0,0,ans,n,matchsticks,sum);
        return ans;
    }
};