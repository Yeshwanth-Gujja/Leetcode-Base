class Solution:
    def canAliceWin(self, n: int) -> bool:
        repitation = 10
        alice_winner = False
        while(n>=repitation):
            n -= repitation
            alice_winner = not(alice_winner)
            repitation -= 1
        return alice_winner
