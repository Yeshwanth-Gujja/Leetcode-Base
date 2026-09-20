function fib(n: number): number {
    if (n < 2) return n;
    let a = 0, b = 1, c = 0;
    for (let i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
};