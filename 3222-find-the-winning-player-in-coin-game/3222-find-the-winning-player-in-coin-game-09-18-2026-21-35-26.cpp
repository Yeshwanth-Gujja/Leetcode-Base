class Solution {
public:
    string winningPlayer(int x, int y) {
        int game_possibilities = x<(y/4) ? x : y/4;
        return game_possibilities%2 ? "Alice": "Bob";
    }
};