/**
 * @param {number} x
 * @param {number} y
 * @return {string}
 */
var winningPlayer = function(x, y) {
    let game_possibilities = Math.min(x,Math.floor(y/4))
    return game_possibilities%2 ? "Alice": "Bob";
};