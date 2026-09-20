int smallestNumber(int n, int t)
{
    while (true)
    {
        int pro = 1;
        int m = 0;
        int org = n;
        while (n>0)
        {
            pro = pro*(n%10);
            n = n/10;
        }
        if (pro%t==0)
        {
            return org;
        }
        n = org+1;
    }
}