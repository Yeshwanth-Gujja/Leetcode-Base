class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        array<bool, 101> simulation{};
        vector<int> result;
        int i = 0;
        while (i < bulbs.size()) {
            simulation[bulbs[i]] = !simulation[bulbs[i]];
            i++;
        }
        i = 0;
        while (i < 101) {
            if (simulation[i])
                result.push_back(i);

            i++;
        }
        return result;
    }
};