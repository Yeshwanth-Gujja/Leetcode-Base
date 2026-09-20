class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        s = 0
        for m in str(x):
            s = s+int(m)
        return s if int(x)%s==0 else -1