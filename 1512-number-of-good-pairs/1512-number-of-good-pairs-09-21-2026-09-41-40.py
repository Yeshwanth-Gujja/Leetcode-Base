class Solution:
    def numIdenticalPairs(self, nums: list[int]) -> int:
        count = 0
        hash = [0] * 101
        for i in range(len(nums)):
            hash[nums[i]] += 1
        for i in range(101):
            count += (hash[i] * (hash[i] - 1)) // 2
        return count