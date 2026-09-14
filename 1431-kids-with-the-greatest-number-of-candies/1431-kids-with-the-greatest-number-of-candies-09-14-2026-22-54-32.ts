function kidsWithCandies(candies: number[], extraCandies: number): boolean[] {
    let n = candies.length;
    let res = [];
    let max = candies[0];
    for (let i = 1; i < n; i++)
    {
        if (max < candies[i])
            max = candies[i];
    }
    for (let i = 0; i < n; i++)
    {
        res[i] = candies[i] + extraCandies >= max;
    }
    return res;
};