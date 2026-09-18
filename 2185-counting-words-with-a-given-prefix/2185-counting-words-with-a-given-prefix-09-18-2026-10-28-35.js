/**
 * @param {string[]} words
 * @param {string} pref
 * @return {number}
 */
var prefixCount = function(words, pref) {
    let count = 0;
    let i = 0;
    while(i<words.length){
        let j = 0;
        while (j < pref.length && words[i][j] === pref[j]) {
            j++;
        }
        if (j === pref.length)
            count++;
        i++;
    }
    return count;
};