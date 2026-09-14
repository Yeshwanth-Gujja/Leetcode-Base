function countDigits(num: number): number {
    let org = num;
    let digit = 0;
    let count = 0;
    while (num > 0)
    {
        digit = num % 10;
        num = Math.floor(num / 10);

        if (org % digit === 0)
        {
            count++;
        }
    }
    return count;
}