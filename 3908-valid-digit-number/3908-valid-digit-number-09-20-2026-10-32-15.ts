function validDigit(n: number, x: number): boolean {
    let found = false;
    let digit = 0;
    while (true) {
        digit = Math.floor(n % 10);
        if (digit == x) {
            found = true;
        }
        if (n < 10) {
            return found && digit != x;
        }
        n = Math.floor(n / 10);
    }
};