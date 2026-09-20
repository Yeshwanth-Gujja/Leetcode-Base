class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = 0
        sum = 0
        mul = 1
        while n > 0:
            m = n % 10
            n //= 10
            if m == 0:
                continue
            sum = sum + m
            x = m * mul + x
            mul = mul * 10
        return x * sum