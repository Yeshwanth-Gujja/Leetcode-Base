/**
 * @param {number[]} bulbs
 * @return {number[]}
 */
var toggleLightBulbs = function(bulbs) {
    let simulation = new Array(101).fill(false);
    let result = [];
    let i = 0;
    while (i < bulbs.length) {
        simulation[bulbs[i]] = !simulation[bulbs[i]];
        i++;
    }
    i = 0;
    while (i < 101) {
        if (simulation[i])
            result.push(i);
        i++;
    }
    return result;
};