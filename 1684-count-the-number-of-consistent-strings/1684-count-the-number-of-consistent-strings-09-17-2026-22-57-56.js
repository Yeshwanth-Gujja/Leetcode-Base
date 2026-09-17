/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
    const allowedLetters = new Array(26).fill(false);

    for (const letter of allowed)
        allowedLetters[letter.charCodeAt(0) - 97] = true;

    let count = 0;

    for (const word of words) {
        let consistent = true;

        for (const letter of word) {
            if (!allowedLetters[letter.charCodeAt(0) - 97]) {
                consistent = false;
                break;
            }
        }

        if (consistent)
            count++;
    }

    return count;
};