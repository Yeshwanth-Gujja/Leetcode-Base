/**
 * @param {number} n
 * @return {number}
 */
var sumAndMultiply = function(n) {
    let x = 0;
    let sum = 0;
    let mul = 1;
    while (n > 0) {
        let m = n % 10;
        n = Math.floor(n / 10);
        if (m === 0)
            continue;
        sum = sum + m;
        x = m * mul + x;
        mul = mul * 10;
    }
    return x * sum;
};