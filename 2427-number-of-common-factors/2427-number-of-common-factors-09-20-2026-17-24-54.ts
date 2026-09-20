function commonFactors(a: number, b: number): number {
    [a, b] = [Math.min(a, b), Math.max(a, b)];
    let count = 0;
    for(let i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            count++;
        }
    }
    return count;
};