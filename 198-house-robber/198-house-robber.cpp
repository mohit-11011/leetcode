class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> inc_exc(n);
        inc_exc[n-1]=make_pair(nums[n-1],0);
        for(int i=n-2;i>=0;i--)
        {
            pair<int,int> s;
            s.first=nums[i]+inc_exc[i+1].second;
            s.second=max(inc_exc[i+1].first,inc_exc[i+1].second);
            inc_exc[i]=s;
        }
        return max(inc_exc[0].first,inc_exc[0].second);
        
    }
};