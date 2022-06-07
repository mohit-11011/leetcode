class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        vector<int> ans;
        if(nums.size()==0)
        {
            return l;
        }
        else
        {
            int temp=nums[0];
            ans.push_back(temp);
            l++;
            for(int i=0;i<nums.size();i++)
            {
                if(temp!=nums[i])
                {
                    ans.push_back(nums[i]);
                    temp=nums[i];
                    l++;

                }
            }
            for(int i=0;i<l;i++)
            {
                nums[i]=ans[i];
            }
            return l;
        }
    }
};