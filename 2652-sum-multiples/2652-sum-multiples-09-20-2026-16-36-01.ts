function sumOfMultiples(n: number): number {
    let sum=0;
    for(let i=1;i<n+1;i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum=sum+i;
        }
    }
    return sum;
};