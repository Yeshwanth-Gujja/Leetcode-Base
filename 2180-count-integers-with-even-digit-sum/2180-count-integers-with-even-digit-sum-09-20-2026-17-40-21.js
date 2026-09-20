/**
 * @param {number} num
 * @return {number}
 */
var countEven = function(num) {
    let sum = 0, temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp = Math.floor(temp/10);
    }
    if (sum % 2 == 0)
        return Math.floor(num / 2);
    else
        return Math.floor((num - 1) / 2);
};