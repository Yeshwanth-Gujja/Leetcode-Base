class Solution:
    def averageValue(self, nums: list[int]) -> int:
        sums = 0
        count = 0
        for i in nums:
            if i%6==0:
                sums += i
                count += 1
        if count == 0:
            return 0
        return sums//count