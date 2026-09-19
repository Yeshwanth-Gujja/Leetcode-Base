class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        result = [0] * n
        i = 0
        while i < n:
            if not (i + 1) % 3 and not (i + 1) % 5:
                result[i] = "FizzBuzz"
            elif not (i + 1) % 3:
                result[i] = "Fizz"
            elif not (i + 1) % 5:
                result[i] = "Buzz"
            else:
                result[i] = str(i + 1)
            i += 1
        return result