int numIdenticalPairs(int* nums, int numsSize) {
    int count = 0;
    int hash[101] = {0};
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    for (int i = 0; i < 101; i++){
        count += ((hash[i]) * (hash[i] - 1))/2;
    }
    return count;
}