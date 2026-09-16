class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        int character_array[128] = {0};
        int i=0;
        while(i<stones.length()){
            character_array[stones[i]] += 1;
            i += 1;
        }
        i=0;
        while(i<jewels.length()){
            count += character_array[jewels[i]];
            i += 1;
        }
        return count;
        }
};