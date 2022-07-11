class Solution {
public:
    void solve(vector<int>& nums,vector<int> temp,vector<vector<int>> &ans,int index,int n)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        else
        {
            solve(nums,temp,ans,index+1,n);
            temp.push_back(nums[index]);
            solve(nums,temp,ans,index+1,n);
            return;
        }
        
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        vector<vector<int>> ans;
        solve(nums,temp,ans,0,n);
        return ans;
    }
};