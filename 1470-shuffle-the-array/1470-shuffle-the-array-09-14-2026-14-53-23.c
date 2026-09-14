/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = 2*n;
    int* ans = (int*)malloc(sizeof(int)*(*returnSize));
    for(int i=0; i<2*n; i++){
        if(i%2==0){
            ans[i]=nums[i/2];
        }
        else{
            ans[i]=nums[n+i/2];
        }
    }
    return ans;
}