/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* toggleLightBulbs(int* bulbs, int bulbsSize, int* returnSize) {
    bool simulation[101] = {false};
    int* result = malloc(sizeof(int)*101);
    *returnSize = 0;
    int i = 0;
    while(i<bulbsSize){
        simulation[bulbs[i]] = !(simulation[bulbs[i]]);
        i += 1;
    }
    i=0;
    while(i<101){
        if(simulation[i]){
            result[*returnSize] = i;
            (*returnSize)++;
        }
        i++;
    }
    return result;
}