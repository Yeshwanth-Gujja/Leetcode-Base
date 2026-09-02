int missingMultiple(int* nums, int numsSize, int k)
{
    int seen[101] = {0};
    for (int i = 0; i < numsSize; i++)
        seen[nums[i]] = 1;
    for (int i = k; i <= 100; i += k)
        if (!seen[i])
            return i;
    return ((100 / k) + 1) * k;
}