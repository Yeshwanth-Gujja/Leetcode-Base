function minCuttingCost(n: number, m: number, k: number): number {
    return k * (n - k) * Number(n > k) + k * (m - k) * Number(m > k);
}