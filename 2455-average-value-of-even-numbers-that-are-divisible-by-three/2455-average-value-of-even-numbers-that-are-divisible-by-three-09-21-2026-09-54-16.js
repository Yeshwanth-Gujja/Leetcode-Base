/**
 * @param {number[]} nums
 * @return {number}
 */
var averageValue = function(nums) {
    let sums = 0;
    let count = 0;
    for(let i = 0; i<nums.length; i++)
    {
        if(nums[i]%6 == 0)
        {
            sums += nums[i];
            count++;
        }
    }
    if(count == 0)
        return 0;
    return Math.floor(sums/count);
};