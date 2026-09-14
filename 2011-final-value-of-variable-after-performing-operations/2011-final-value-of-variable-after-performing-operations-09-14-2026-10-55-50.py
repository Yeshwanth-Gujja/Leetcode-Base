class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for i in operations:
            x += 1 if i[1] == '+' else -1
        return x