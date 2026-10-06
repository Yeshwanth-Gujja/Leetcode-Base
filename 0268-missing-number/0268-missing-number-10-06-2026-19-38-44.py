class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        length = len(nums)
        actual_sum = (length*(length+1))//2
        repeatitative_sum = 0
        for i in nums:
            repeatitative_sum += i
        return abs(actual_sum-repeatitative_sum)