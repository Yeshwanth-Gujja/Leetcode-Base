function alternateDigitSum(n: number): number {
    let sum=0;
    let sign=1;
    while(n>0){
        sum=sum+sign*(n%10);
        sign=-sign;
        n = Math.floor(n/10);
    }
    return -sign*sum;
};