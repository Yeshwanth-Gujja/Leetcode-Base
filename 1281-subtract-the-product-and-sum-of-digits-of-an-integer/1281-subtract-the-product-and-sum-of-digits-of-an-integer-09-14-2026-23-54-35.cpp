class Solution {
public:
    int subtractProductAndSum(int n) {
        long productOfDigits = 1;
        long sumOfDigits = 0;
        while (n > 0) {
            productOfDigits *= n % 10;
            sumOfDigits += n % 10;
            n /= 10;
        }
        return productOfDigits - sumOfDigits;
    }
};