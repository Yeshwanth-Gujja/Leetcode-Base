class Solution:
    def checkDivisibility(self, n: int) -> bool:
        s = 0
        p = 1
        for m in str(n):
            s = s + int(m)
            p = p * int(m)
        return n%(s+p)==0