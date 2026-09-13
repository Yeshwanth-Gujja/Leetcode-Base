int accountBalanceAfterPurchase(int purchaseAmount){
    int digit = purchaseAmount%10;
    if(digit>4)
        return 100-(purchaseAmount + (10-digit));
    else
        return 100-(purchaseAmount - digit);
}