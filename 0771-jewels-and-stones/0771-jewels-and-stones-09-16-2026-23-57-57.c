int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;
    int character_array[128] = {0};
    int i=0;
    while(i<strlen(stones)){
        character_array[stones[i]] += 1;
        i += 1;
    }
    i=0;
    while(i<strlen(jewels)){
        count += character_array[jewels[i]];
        i += 1;
    }
    return count;
}