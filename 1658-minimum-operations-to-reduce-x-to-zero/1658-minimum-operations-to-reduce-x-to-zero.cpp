class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i=0,j=0,n=nums.size();
        int sum=0;
        int ans=-1;
        if(nums.size()==1)
        {
            if(nums[0]==x)
            {
                return 1;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int cur=nums[0];
        while(i<n && j<n)
        {
           if(cur<sum-x)
           {
               j++;
               if(j==n)
                   break;
               cur=cur+nums[j];
           }
            else if(cur>sum-x)
            {
                i++;
                if(i==n)
                    break;
                cur=cur-nums[i-1];
            }
            else if(cur==sum-x)
            {
              int temp=j-i+1;
                if(temp>ans)
                {
                    ans=temp;
                    
                }
                j++;
               if(j==n)
                   break;
               cur=cur+nums[j];
            }
        }
    if(ans==-1)
        return -1;
        else
            return n-ans;
    }
};