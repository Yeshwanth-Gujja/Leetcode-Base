/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function(nums) {
    let pos = 0, nos=0;
    for(let i = 0; i<nums.length; i++)
    {
        if(nums[i]>0) {
            pos++;
        }
        else if(nums[i]<0){
            nos++;
        }
    }
    return pos>=nos?pos:nos;
};