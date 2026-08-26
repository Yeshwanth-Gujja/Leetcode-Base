class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return sum (list (map (lambda x: 1 if len(str(x)) % 2 == 0 else 0, nums)))