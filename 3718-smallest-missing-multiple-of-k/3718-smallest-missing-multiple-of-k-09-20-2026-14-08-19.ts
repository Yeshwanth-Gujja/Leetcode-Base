function missingMultiple(nums: number[], k: number): number {
    let seen = new Array(101).fill(0);
    for (let i = 0; i < nums.length; i++){
        seen[nums[i]] = 1;
    }
    for (let i = k; i <= 100; i += k){
        if (!seen[i]){
            return i;
        }
    }
    return (Math.floor(100 / k) + 1) * k;
};