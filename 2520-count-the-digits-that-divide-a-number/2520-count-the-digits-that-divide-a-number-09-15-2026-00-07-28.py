class Solution:
    def countDigits(self, num: int) -> int:
        org = num
        count = 0
        digit = 0
        while(num>0):
            digit = num%10
            num //= 10
            if org%digit == 0:
                count += 1
            else:
                continue
        return count