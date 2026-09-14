class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res(n);
        int max = candies[0];
        for (int i = 1; i < n; i++)
        {
            if (max < candies[i])
                max = candies[i];
        }
        for (int i = 0; i < n; i++)
        {
            res[i] = candies[i] + extraCandies >= max;
        }
        return res;
    }
};