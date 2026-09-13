class Solution:
    def addDigits(self, num: int) -> int:
        while len(str(num))>1:
            sum = 0
            for digit in str(num):
                sum = sum + int(digit)
            num = sum
        return num