class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sumofdig = 0
        proofdig = 1
        for m in str(n):
            sumofdig = sumofdig + int(m)
            proofdig = proofdig * int(m)
        return proofdig-sumofdig