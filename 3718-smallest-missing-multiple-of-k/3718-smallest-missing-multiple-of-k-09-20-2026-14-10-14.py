class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        for i in range(k,(max(nums)+k+1),k):
            if i in nums:
                continue
            else:
                return i