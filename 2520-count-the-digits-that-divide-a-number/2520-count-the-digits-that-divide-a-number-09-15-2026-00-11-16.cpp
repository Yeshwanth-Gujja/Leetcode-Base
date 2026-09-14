class Solution {
public:
    int countDigits(int num) {
        int org = num;
        int digit = 0;
        int count = 0;
        while (num > 0)
        {
            digit = num % 10;
            num /= 10;

            if (org % digit == 0)
            {
                count++;
            }
        }
        return count;
    }
};