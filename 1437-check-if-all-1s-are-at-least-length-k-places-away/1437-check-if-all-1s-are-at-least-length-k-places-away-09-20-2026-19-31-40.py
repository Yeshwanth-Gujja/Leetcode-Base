class Solution:
    def kLengthApart(self, nums: list[int], k: int) -> bool:
        count = 0
        i = 0
        while i < len(nums) and nums[i] != 1:
            i += 1
        if i == len(nums):
            return True
        for i in range(i + 1, len(nums)):
            if nums[i] == 0:
                count += 1
            elif nums[i] == 1 and count >= k:
                count = 0
            else:
                return False
        return True