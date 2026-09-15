/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    let weeks = Math.floor(n / 7);
    let days = n % 7;
    let amount = 0;
    for (let i = 0; i < weeks; i++) {
        amount += 28 + (7 * i);
    }
    for (let i = weeks + 1; i <= weeks + days; i++) {
        amount += i;
    }
    return amount;
};