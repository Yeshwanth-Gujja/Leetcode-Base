/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let productOfDigits = 1;
    let sumOfDigits = 0;
    while (n > 0) {
        productOfDigits *= n % 10;
        sumOfDigits += n % 10;
        n = Math.floor(n / 10);
    }
    return productOfDigits - sumOfDigits;
};