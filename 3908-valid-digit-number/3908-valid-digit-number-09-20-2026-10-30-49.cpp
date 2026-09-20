class Solution {
public:
    bool validDigit(int n, int x) {
        bool found = false;

        do {
            int digit = n % 10;

            if (digit == x)
                found = true;

            if (n < 10)
                return found && digit != x;

            n /= 10;
        } while (true);
    }
};