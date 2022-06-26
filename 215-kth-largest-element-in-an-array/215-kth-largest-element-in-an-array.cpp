class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.begin()+nums.size());
        return nums[nums.size()-k];
    }
};