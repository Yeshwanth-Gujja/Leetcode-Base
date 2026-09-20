class Solution:
    def alternateDigitSum(self, n: int) -> int:
        sums = 0
        sign = 1
        while n > 0:
            sums += sign * (n % 10)
            sign = -sign
            n //= 10
        return -sign * sums