function sumBase(n: number, k: number): number {
    let sums = 0;
    while (n > 0) {
        sums += n % k;
        n = Math.floor(n/k);
    }
    return sums;
};