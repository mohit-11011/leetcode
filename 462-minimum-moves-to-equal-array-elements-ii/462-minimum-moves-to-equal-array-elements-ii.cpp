class Solution {
public:
    int soln(vector<int> &nums,int index)
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=abs(nums[i]-nums[index]);
        }
        return ans;
    }
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2==1)
        {
            return soln(nums,n/2);
        }
        else
        {
            return min(soln(nums,n/2),soln(nums,n/2-1));
        }
        
    }
};