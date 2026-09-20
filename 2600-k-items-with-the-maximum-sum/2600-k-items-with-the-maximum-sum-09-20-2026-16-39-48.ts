function kItemsWithMaximumSum(numOnes: number, numZeros: number, numNegOnes: number, k: number): number {
    if(k<=numOnes){
        return k;
    }
    else if(k<=(numOnes + numZeros)){
        return numOnes;
    }
    else{
        return (numOnes-(k-(numOnes + numZeros)));
    }
};