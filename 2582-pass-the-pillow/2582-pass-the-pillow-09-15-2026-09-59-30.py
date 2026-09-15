class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        direction =time//(n - 1)
        position = time % (n - 1)
        return position + 1 if direction % 2 == 0 else n - position