/**
 * @param {string} s
 * @param {character} letter
 * @return {number}
 */
var percentageLetter = function(s, letter){
    let count = 0;
    for (const c of s){
        if (c === letter){
            count++;
        }
    }
    return Math.floor((count * 100) / s.length);
};