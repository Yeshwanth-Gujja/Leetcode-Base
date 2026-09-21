int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int maximum = 0, count = 0;
    for(int i = 0; i<numsSize; i++)
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
}