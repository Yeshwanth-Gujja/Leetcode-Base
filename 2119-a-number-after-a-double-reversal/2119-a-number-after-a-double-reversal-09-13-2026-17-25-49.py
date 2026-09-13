class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        return True if num==0 else not(num%10==0)