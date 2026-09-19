class Solution:
    def minCuttingCost(self, n: int, m: int, k: int) -> int:
        return k*(n-k)*(n>k)+k*(m-k)*(m>k)