int maximumCount(int* nums, int numsSize) {
    int pos = 0, nos=0;
    for(int i = 0; i<numsSize; i++)
    {
        if(nums[i]>0) {
            pos++;
        }
        else if(nums[i]<0){
            nos++;
        }
    }
    return pos>=nos?pos:nos;
}