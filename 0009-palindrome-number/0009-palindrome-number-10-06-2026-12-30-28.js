/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0) return false;
    let org = x;
    let m = 0;
    while (x>0){
        m = m*10+x%10;
        x = Math.floor(x/10);
    }
    return (org==m);
};