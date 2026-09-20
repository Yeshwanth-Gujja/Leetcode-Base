long long sumAndMultiply(int n) {
    long x = 0;
    long sum = 0;
    long mul = 1;
    while (n > 0) {
        long m = n % 10;
        n /= 10;
        if (m == 0)
            continue;
        sum = sum+m;
        x = m*mul+x;
        mul = mul*10;
    }
    return (long long)x * sum;
}