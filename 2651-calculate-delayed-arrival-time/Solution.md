# Simple 24-Hour Clock Calculation Using Modulo | LeetCode 2651

# Intuition

The delayed arrival time is simply the sum of the original arrival time and the delay.

Since the time follows a 24-hour clock, any result that reaches or exceeds `24` needs to wrap around to the beginning of the clock. We can handle this directly using the modulo operator `% 24`.

# Approach

Add `arrivalTime` and `delayedTime`, then use `% 24` to keep the result within the range `0` to `23`.

Formula:

`(arrivalTime + delayedTime) % 24`

# Logic

The sum gives the arrival time after applying the delay.

If the result is less than `24`, it is already the correct time.

If the result is `24` or greater, `% 24` wraps it back to the beginning of the 24-hour clock.

For example:

`arrivalTime = 15`
`delayedTime = 10`

`15 + 10 = 25`

`25 % 24 = 1`

So, the delayed arrival time is `1`.

# Flow

`arrivalTime + delayedTime`
→ Apply `% 24`
→ Keep the result within `0–23`
→ Return delayed arrival time

# Algorithm

1. Add `arrivalTime` and `delayedTime`.
2. Apply modulo `24` to the result.
3. Return the resulting time.

# Why This Works

A 24-hour clock resets to `0` after `23`.

The modulo operation gives the remainder after dividing the total time by `24`, which automatically handles this wrap-around.

Therefore, `(arrivalTime + delayedTime) % 24` always produces the correct delayed arrival time.

# Complexity

- Time complexity: `O(1)` — Only one addition and one modulo operation are performed.
- Space complexity: `O(1)` — No additional data structures are used.

# Code

```python3 []
class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        return (arrivalTime + delayedTime) % 24
```

```javascript []
var findDelayedArrivalTime = function(arrivalTime, delayedTime) {
    return (arrivalTime + delayedTime) % 24;
};
```

```typescript []
function findDelayedArrivalTime(arrivalTime: number, delayedTime: number): number {
    return (arrivalTime + delayedTime) % 24;
}
```

```c []
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
}
```

```cpp []
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24;
    }
};
```