function sumOfTheDigitsOfHarshadNumber(x: number): number {
    let sum = 0;
    let org = x;
    while (x!=0)
    {
        sum = sum+(x%10);
        x = Math.floor(x/10);
    }
    return (org%sum==0)?sum:-1;
};