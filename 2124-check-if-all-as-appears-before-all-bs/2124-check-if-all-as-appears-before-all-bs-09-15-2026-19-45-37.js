/**
 * @param {string} s
 * @return {boolean}
 */
var checkString = function(s) {
    let i = 0;
    while(i < s.length){
        if (s[i] == 'b' && s[i + 1] == 'a'){
            return false;
        }
        i++;
    }
    return true;
};