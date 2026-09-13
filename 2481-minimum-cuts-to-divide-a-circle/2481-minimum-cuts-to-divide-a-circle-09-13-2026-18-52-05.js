/**
 * @param {number} n
 * @return {number}
 */
var numberOfCuts = function(n) {
    return n!=1 ? n%2==0 ? n/2 : n : 0;
};