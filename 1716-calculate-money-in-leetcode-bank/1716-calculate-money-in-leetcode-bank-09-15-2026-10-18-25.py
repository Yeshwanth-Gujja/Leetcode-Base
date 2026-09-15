class Solution:
    def totalMoney(self, n: int) -> int:
        weeks = n // 7
        days = n % 7
        amount = 0
        for i in range(weeks):
            amount += 28+(7*i)
        for i in range(weeks + 1, weeks + days + 1):
            amount += i
        return amount