function shuffle(nums: number[], n: number): number[] {
    const len = nums.length;
    let result = [];
    const a = nums.slice(0,n);
    const b = nums.slice(n);
    for (let i = 0; i < a.length; i++) {
        result.push(a[i]);
        result.push(b[i]);
    }

    return result;
};