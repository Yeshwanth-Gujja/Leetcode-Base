/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var sumBase = function(n, k) {
    let sums = 0;
    while (n > 0) {
        sums += n % k;
        n = Math.floor(n/k);
    }
    return sums;
};