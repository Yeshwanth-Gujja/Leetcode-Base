/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies,
                      int* returnSize) {
    *returnSize = candiesSize;
    int max = candies[0];
    bool* res = malloc(candiesSize * sizeof(bool));
    for (int i = 1; i < candiesSize; i++) {
        if (max < candies[i]) {
            max = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        res[i] = candies[i] + extraCandies >= max;
    }
    return res;
}