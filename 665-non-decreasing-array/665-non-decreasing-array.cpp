/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
class Solution
{
public:
    bool solve(vector<int> nums,int index)
    {
        nums.erase(nums.begin()+index);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
               return false;
            }
        }
        return true;
        
    }
    bool checkPossibility(vector<int> &nums)
    {
        int count = 0;
        int index = -1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                count++;
                index = i;
            }
        }
            if(count==0)
                return true;
            if(count>2)
                return false;
            return (solve(nums,index) || solve(nums,index+1));
    }
                
    };
