class Solution {
public:
    long long sumAndMultiply(int n) {
        long long m = 0, x = 0, sum = 0;
        while (n > 0) {
            if (n % 10) {
                m = m * 10 + n % 10;
                sum += n % 10;
            }
            n /= 10;
        }
        while (m > 0) {
            x = x * 10 + m % 10;
            m /= 10;
        }
        return x * sum;
    }
};