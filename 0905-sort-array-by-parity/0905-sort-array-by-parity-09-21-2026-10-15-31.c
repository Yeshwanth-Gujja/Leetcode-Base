/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            ans[j++] = nums[i];
            nums[i] = 0;
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            ans[j++] = nums[i];
        }
    }
    *returnSize = numsSize;
    return ans;
}