/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let res = 0, x = 0;
    let n = nums.length;
    for(let i=0; i<n ; i++)
    {
        x = nums[i];
        if(9<x && x<100 || 999<x && x<10000 || x==100000){
           res++;
        }
    }
    return res;
};