function buildArray(nums: number[]): number[] {
    const n: number = nums.length;
    const ans: number[] = new Array(n);
    for (let i = 0; i < n; i++){
        ans[i] = nums[nums[i]];
    }
    return ans;
};