class Solution:
    def fib(self, n: int) -> int:
        if (n==0 or n==1):
            return n
        fib_0 = 0
        fib_1 = 1
        for index in range(2,n+1):
            temp = fib_1
            fib_1 += fib_0
            fib_0 = temp
        return fib_1