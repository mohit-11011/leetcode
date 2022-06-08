class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0)
            return 0;
      int i=0,j=nums.size()-1;
        int index;
        while(i<j-1 )
        {
            index=(i+j)/2;
            if(nums[index]==target)
                return index;
            else if (nums[index]<target)
            {
                i=index;
            }
            else if (nums[index]>target)
            {
                j=index;
            }
            
        }
        if(target>nums[j])
        {
            return j+1;
        }
        else if(target>nums[i])
        {
            return i+1;
        }
        else
        {
            return i;
        }
        return 0;
    }
};