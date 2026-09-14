int subtractProductAndSum(int n) {
    long proofdig = 1;
    long sumofdig = 0;
    while (n>0){
        proofdig = proofdig*(n%10);
        sumofdig = sumofdig+(n%10);
        n = n/10;
    }
    return (proofdig-sumofdig);
}