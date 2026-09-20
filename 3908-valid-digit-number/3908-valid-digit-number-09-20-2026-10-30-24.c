bool validDigit(int n, int x) {
    bool a = 0;
    do {
        int res = n % 10;
        if (res == x)
        {
            a = 1;
        }
        if (n < 10)
        {
            return a && (res != x);
        }
        n /= 10;
    } while (true);
}