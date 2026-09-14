/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    n = accounts.length;
    let max = 0;
    let sum = 0;
    let m = accounts[0].length;
    for (let i=0; i<n; i++)
    {
        sum = 0;
        for(let j=0; j<m; j++)
        {
            sum += accounts[i][j];
        }
        if(sum>max)
        max = sum;
    }
    return max;
};