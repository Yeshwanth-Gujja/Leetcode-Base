int singleNumber(int* nums, int numsSize) {
    int i,j;
    for(i=0; i<numsSize-1; i++){
        nums[i + 1] = nums[i] ^ nums[i + 1];
    }
    return nums[numsSize - 1];
}