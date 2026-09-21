class Solution:
    def arraySign(self, nums: list[int]) -> int:
        pro = 1
        for i in nums:
            pro *= i
        return 1 if pro>0 else 0 if pro == 0 else -1