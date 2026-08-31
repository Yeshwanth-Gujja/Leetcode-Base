int totalMoney(int n)
{
    int weeks = n / 7;
    int days = n % 7;
    int amount = 0;
    for (int i = 0; i < weeks; i++)
    {
        amount += 28 + (7 * i);
    }
    for (int i = weeks + 1; i <= weeks + days; i++)
    {
        amount += i;
    }
    return amount;
}