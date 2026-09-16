/**
 * @param {string} num
 * @return {string}
 */
var largestOddNumber = function(num) {
    let i = num.length-1;
    while(i>=0 && (num[i] == '0' || num[i] == '2' || num[i] == '4' || num[i] == '6' ||num[i] == '8')){
        i--;
    }
    return num.substr(0,i+1);
};