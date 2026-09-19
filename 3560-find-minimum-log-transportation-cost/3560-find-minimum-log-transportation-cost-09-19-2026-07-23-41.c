long long minCuttingCost(long n, long m, long k) {
    return (k*(n-k)*(n>k)+k*(m-k)*(m>k));
}