/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
    num = String(num)
    return Number(num.replace('6','9'))
};