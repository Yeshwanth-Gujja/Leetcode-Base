function checkDivisibility(n: number): boolean {
    let sum = 0;
    let pro = 1;
    let org = n;
    while (n>0){
        sum = sum+(n%10);
        pro = pro*(n%10);
        n = Math.floor(n/10);
    } return (org%(sum+pro)==0);
};