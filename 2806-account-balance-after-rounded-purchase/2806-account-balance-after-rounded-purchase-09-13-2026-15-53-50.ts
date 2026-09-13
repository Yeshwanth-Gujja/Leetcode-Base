function accountBalanceAfterPurchase(purchaseAmount: number): number {
    return 100 - Math.floor((purchaseAmount + 5) / 10) * 10;
};