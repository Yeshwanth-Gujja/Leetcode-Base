int findNumbers(int* nums, int numsSize)
{
    int res,x = 0;
    for(int i=0; i<numsSize ; i++)
    {
        x = nums[i];
        if(9<x && x<100 || 999<x && x<10000 || x==100000){
            res++;
        }
    }
    return res;
}