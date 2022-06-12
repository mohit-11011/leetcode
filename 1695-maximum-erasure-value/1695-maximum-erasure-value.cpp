class Solution {
public:
    int fun(vector<int>& nums,int i,int j)
    {
        int ans=-1;
        int n=nums.size();
        while(j<n && i<j)
        {
            if(nums[j]==nums[i])
            {
                ans=i;
            }
            i++;
        }
        return ans;
    }
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
            return nums[0];
        unordered_set<int> s;
        int i=0,j=0;
        int sum=0,max=0;
        while(i<n && j<n)
        {
            //int temp=fun(nums,i,j);
            if(s.count(nums[j])>0)
            {
                if(max<sum)
                {
                    max=sum;
                }
                s.erase(nums[i]);
                sum=sum-nums[i];
                i++;
                
            }
            else
            {
               sum=sum+nums[j];
                s.insert(nums[j]);
                j++;
            }
        }
        return max>sum?max:sum;
        
    }
};