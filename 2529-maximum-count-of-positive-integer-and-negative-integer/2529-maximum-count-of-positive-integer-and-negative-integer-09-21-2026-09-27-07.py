class Solution:
    def maximumCount(self, nums: list[int]) -> int:
        pos = 0
        nos = 0
        for i in nums:
            if i>0:
                pos+=1
            elif i<0:
                nos+=1
        return max(pos,nos)