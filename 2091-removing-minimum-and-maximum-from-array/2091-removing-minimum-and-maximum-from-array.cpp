class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_index=0,max_index=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<nums[min_index])
            {
                min_index=i;
            }
            if(nums[i]>nums[max_index])
            {
                max_index=i;
            }
        }
        int n1=max(min_index,max_index)+1;
        int n2=n-min(min_index,max_index);
        int n3=max_index+1+n-min_index;
        int n4=min_index+1+n-max_index;
        return min(min(n1,n2),min(n3,n4));
    }
};