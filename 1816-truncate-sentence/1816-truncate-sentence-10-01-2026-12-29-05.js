/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    let c = 0;
    for(let i = 0; i < s.length; i++)
    {
        if(s[i] == ' ')
        {
            c++;
        }
        if(c == k)
        {
            return s.slice(0, i);
        }
    }
    return s;
};