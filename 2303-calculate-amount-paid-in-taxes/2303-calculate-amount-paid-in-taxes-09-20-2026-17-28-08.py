class Solution:
    def calculateTax(self, brackets: list[list[int]], income: int) -> float:
        i = 0
        window = 0
        result = 0
        while income>brackets[i][0] :
            window =  brackets[i][0] - window
            result += window*round((brackets[i][1]/100),5)
            window = brackets[i][0]
            i+=1
        window = income-window
        result += window*round((brackets[i][1]/100),5)
        return round(result, 5)