class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> result(n);
        int i = 1;

        while (i <= n) {
            if (!(i % 3) && !(i % 5)) {
                result[i - 1] = "FizzBuzz";
            }
            else if (!(i % 3)) {
                result[i - 1] = "Fizz";
            }
            else if (!(i % 5)) {
                result[i - 1] = "Buzz";
            }
            else {
                result[i - 1] = to_string(i);
            }

            i++;
        }

        return result;
    }
};