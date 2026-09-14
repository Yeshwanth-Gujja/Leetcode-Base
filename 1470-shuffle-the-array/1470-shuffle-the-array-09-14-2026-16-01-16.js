/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    const result = Array(nums.length);
    let k = 0;
    for(let i = 0; i < n; i++) {
        result[k] = nums[i];
        result[k + 1] = nums[i + n];
        k+=2;
    }

    return result;
};