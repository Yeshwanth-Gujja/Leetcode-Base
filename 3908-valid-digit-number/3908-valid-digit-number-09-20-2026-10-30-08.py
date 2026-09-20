class Solution:
    def validDigit(self, n: int, x: int) -> bool:
        found = False
        while True:
            digit = n % 10
            if digit == x:
                found = True
            if n < 10:
                return found and digit != x
            n //= 10