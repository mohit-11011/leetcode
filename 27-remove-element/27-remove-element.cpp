class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int temp=nums.size()-1;
        int rep=0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]==val)
            {
                rep++;
                while(temp>=0 && nums[temp]==val )
                {
                    temp--;
                    if(temp<0)
                        break;
                    
                }
                if(temp>=0)
                {
                nums[i]=nums[temp];
                temp--;
                }
            }
        }
        return nums.size()-rep;
    }
};