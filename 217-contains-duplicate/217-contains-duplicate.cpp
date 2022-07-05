class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int n=nums.size();
        int x=s.size();
        if(n-x>0)
        {
            return true;
        }
        return false;
    }
};