/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let count = 0;
    let character_array = new Array(128).fill(0);
    let i = 0;
    while (i < stones.length) {
        character_array[stones.charCodeAt(i)] += 1;
        i += 1;
    }
    i = 0;
    while (i < jewels.length) {
        count += character_array[jewels.charCodeAt(i)];
        i += 1;
    }
    return count;
};