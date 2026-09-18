function winningPlayer(x: number, y: number): string {
    let game_possibilities = Math.min(x,Math.floor(y/4))
    return game_possibilities%2 ? "Alice": "Bob";
};