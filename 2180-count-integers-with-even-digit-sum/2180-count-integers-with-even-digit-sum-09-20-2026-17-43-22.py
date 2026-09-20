class Solution:
    def countEven(self, num: int) -> int:
        sums = 0
        temp = num
        while temp:
            sums += temp % 10
            temp //= 10
        return num // 2 if sums % 2 == 0 else (num - 1) // 2