/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let maximum = 0, count = 0;
    for(let i = 0; i<nums.length; i++)
    {
        if(nums[i]==1)
        {
            count+=1;
            if(count>maximum)
            {
                maximum = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return maximum;
};