class Solution:
    def sortArrayByParity(self, nums: list[int]) -> list[int]:
        ans = []
        i = 0
        while i < len(nums):
            if nums[i] % 2 == 0:
                ans.append(nums[i])
                nums[i] = 0
            i += 1
        i = 0
        while i < len(nums):
            if nums[i] != 0:
                ans.append(nums[i])
            i += 1
        return ans
