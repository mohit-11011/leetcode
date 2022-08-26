class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> s;
        for(auto i:nums)
        {
            s[i]++;
        }
        set<int> x(nums.begin(),nums.end());
        vector<int> ans;
        int reqd=nums.size()/3;
        for(auto i:x)
        {
            if(s[i]>reqd)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};