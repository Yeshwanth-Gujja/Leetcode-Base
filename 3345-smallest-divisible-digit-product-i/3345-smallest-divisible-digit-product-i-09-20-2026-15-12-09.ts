function smallestNumber(n: number, t: number): number {
    while (true)
    {
        let pro = 1;
        let m = 0;
        let org = n;
        while (n>0)
        {
            pro = pro*(n%10);
            n = Math.floor(n/10);
        }
        if (pro%t==0)
        {
            return org;
        }
        n = org+1;
    }
};