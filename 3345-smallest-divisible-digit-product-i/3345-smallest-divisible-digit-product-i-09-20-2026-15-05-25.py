class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            pro = 1
            for m in str(n):
                pro = pro*int(m)
            if pro%t==0:
                return n
            n = n+1
        