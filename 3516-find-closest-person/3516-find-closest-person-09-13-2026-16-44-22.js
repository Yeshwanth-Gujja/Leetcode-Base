/**
 * @param {number} x
 * @param {number} y
 * @param {number} z
 * @return {number}
 */
var findClosest = function(x, y, z) {
    const a = Math.abs(x-z);
    const b = Math.abs(z-y);
    return (a-b<0)?1:((a-b==0)?0:2);
};