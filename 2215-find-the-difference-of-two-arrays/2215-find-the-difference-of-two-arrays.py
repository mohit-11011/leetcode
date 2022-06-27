class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        nums1=list(set(nums1))
        nums2=list(set(nums2))
        nums2c=[]
        for i in nums2:
            nums2c.append(i)
        
        for i in nums2:
            if(i in nums1):
                nums1.remove(i)
                nums2c.remove(i)
        r=[nums1,nums2c]
        return r
                
        