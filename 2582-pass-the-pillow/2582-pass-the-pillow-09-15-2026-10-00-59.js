/**
 * @param {number} n
 * @param {number} time
 * @return {number}
 */
var passThePillow = function(n, time) {
    let direction = Math.floor(time / (n - 1));
    let position = time % (n - 1);
    return direction % 2 == 0 ? position + 1 : n - position;
};