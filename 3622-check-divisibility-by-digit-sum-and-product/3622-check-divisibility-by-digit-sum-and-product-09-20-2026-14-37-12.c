bool checkDivisibility(int n) {
    long sum = 0;
    long pro = 1;
    int org = n;
    while (n>0){
        sum = sum+(n%10);
        pro = pro*(n%10);
        n = n/10;
    } return (org%(sum+pro)==0);
}