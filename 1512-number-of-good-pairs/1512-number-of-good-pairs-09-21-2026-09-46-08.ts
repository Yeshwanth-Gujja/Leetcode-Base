function numIdenticalPairs(nums: number[]): number {
    let count = 0;
    let hash = new Array(101).fill(0);
    for (let i = 0; i < nums.length; i++) {
        hash[nums[i]]++;
    }
    for (let i = 0; i < 101; i++){
        count += ((hash[i]) * (hash[i] - 1))/2;
    }
    return count;
};