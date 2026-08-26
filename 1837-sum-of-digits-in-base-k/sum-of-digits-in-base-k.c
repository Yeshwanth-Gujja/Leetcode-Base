int sumBase(int n, int k) {
    int sums = 0;
    while (n > 0) {
        sums += n % k;
        n /= k;
    }
    return sums;
}