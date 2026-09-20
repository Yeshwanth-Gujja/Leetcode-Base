int commonFactors(int a, int b) {
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int count = 0;
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            count++;
        }
    }
    return count;
}