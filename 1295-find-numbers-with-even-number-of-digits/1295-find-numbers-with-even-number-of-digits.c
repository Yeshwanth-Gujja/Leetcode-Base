int findNumbers(int* nums, int numsSize)
{
    int res,count = 0;
    for(int i=0; i<numsSize ; i++)
    {
        count = 0;
        while(nums[i])
        {
            nums[i] = nums[i]/10;
            count++;         
        }
        if(count % 2 == 0){
            res += 1;
        }
    }
    return res;
}