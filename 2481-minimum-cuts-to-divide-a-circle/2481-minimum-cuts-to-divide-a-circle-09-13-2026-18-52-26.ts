function numberOfCuts(n: number): number {
    return n!=1 ? n%2==0 ? n/2 : n : 0;
};