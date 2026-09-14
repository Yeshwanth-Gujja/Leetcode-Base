/**
 * @param {number} mainTank
 * @param {number} additionalTank
 * @return {number}
 */
var distanceTraveled = function(mainTank, additionalTank) {
    let distance = 0;
    while(mainTank >= 5 && additionalTank >= 1){
        distance += 10*5;
        mainTank-=4;
        additionalTank-=1;
    }
    return distance + (mainTank*10);
};