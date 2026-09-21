/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let ans = [];
    let i = 0;

    while (i < nums.length) {
        if (nums[i] % 2 === 0) {
            ans.push(nums[i]);
            nums[i] = 0;
        }
        i++;
    }

    i = 0;

    while (i < nums.length) {
        if (nums[i] !== 0) {
            ans.push(nums[i]);
        }
        i++;
    }

    return ans;
};