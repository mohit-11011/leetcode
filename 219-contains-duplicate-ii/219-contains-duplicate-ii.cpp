class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>> s;
        for(int i=0;i<nums.size();i++)
        {
           s[nums[i]].push_back(i); 
        }
        for(auto i:s)
        {
            if (i.second.size()==1)
            {
                continue;
            }
            else
            {
                
               
                int n=i.second.size();
                int diff=INT_MAX;
                for(int j=1;j<n;j++)
                {
                    diff=min(diff,i.second[j]-i.second[j-1]);
                        if(diff<=k)
                        {
                            return true;
                        }
                }
                
           }
        }
        
        return false;
    }
};