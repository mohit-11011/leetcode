class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0, j = 0, k = 0;
        vector<int> rev;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                rev.push_back(nums1[i]);
                i++;
            }
            else
            {
                rev.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        while (i < m)
        {
            rev.push_back(nums1[i]);
            i++;
        }
        while (j < n)
        {
            rev.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<(m+n);i++)
        {
            nums1[i]=rev[i];
        }
        return;
    }
};