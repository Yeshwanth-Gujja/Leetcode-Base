/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var kLengthApart = function(nums, k) {
    let count = 0;
    let i = 0;
    while(i!=1)
    {
        i++;
    }
    for(i++;i<nums.length;i++)
    {
        if(nums[i] == 0)
        {
            count++;
        }
        else if (nums[i] == 1 && count >= k)
        {
            count = 0;
        }
        else
        {
            return false;
        }
    }
    return true;
};