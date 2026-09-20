class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        num1 = 0
        num2 = 0
        for k in range(1,n+1):
            if k%m!=0:
                num1 += k
            else:
                num2 += k
        return num1-num2           
        