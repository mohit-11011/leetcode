class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        l=[]
        l.extend(nums)
        l.extend(nums)
        return l
        