/**
 * @param {number} n
 * @param {number} x
 * @return {boolean}
 */
var validDigit = function(n, x) {
    let found = false;
    let digit = 0;
    while (true) {
        digit = Math.floor(n % 10);
        if (digit == x) {
            found = true;
        }
        if (n < 10) {
            return found && digit != x;
        }
        n = Math.floor(n / 10);
    }
};