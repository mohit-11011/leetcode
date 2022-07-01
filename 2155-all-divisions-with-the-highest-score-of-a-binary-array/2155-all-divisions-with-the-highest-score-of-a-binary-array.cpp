class Solution {
public:
    static bool cmp2(pair<int,int> &a,pair<int,int> &b)
    {
        return a.first>b.first;
    }
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n+1);
        vector<int> right(n+1);
        vector<pair<int,int>> v(n+1);
        vector<int> ans;
        int l=abs(1-nums[0]),r=0;
        left[0]=0;
        right[n]=0;
        for(int i=1;i<n;i++)
        {
         left[i]=l;
        if(nums[i]==0)
            l++;
        }
        left[n]=l;
        left[n]=l;
        for(int i=n-1;i>=0;i--)
        { 
            if(nums[i]==1)
                r++;
            right[i]=r;            
        }
       for(int i=0;i<=n;i++)
       {
           v[i]=make_pair(right[i]+left[i],i);
       }
        sort(v.begin(),v.end(),cmp2);
        int max=v[0].first;
        for(int i=0;i<n+1;i++)
        {
            if(v[i].first==max)
            {
                ans.push_back(v[i].second);
            }
        }
        return ans;
    }
};