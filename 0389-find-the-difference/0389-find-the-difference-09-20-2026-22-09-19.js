/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    let a = 0;
    let b = 0;
    let i = 0;
    while (i < s.length) {
        a += s.charCodeAt(i);
        b += t.charCodeAt(i);
        i++;
    }
    b += t.charCodeAt(i);
    return String.fromCharCode(b - a);
};