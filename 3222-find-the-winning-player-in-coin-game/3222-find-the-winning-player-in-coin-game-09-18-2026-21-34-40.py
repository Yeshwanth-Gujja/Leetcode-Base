class Solution:
    def winningPlayer(self, x: int, y: int) -> str:
        game_possibilities = min(x,y//4)
        return "Alice" if game_possibilities%2 else "Bob"