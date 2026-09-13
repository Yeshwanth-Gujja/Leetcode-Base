# One Elimination Per Match: The n - 1 Formula | LeetCode 1688

# Intuition

Every match in the tournament eliminates exactly one team.

To determine a single winner from `n` teams, we need to eliminate `n - 1` teams. Therefore, the total number of matches is always `n - 1`, regardless of how the matches are arranged.

# Approach

Instead of simulating the tournament round by round, we can directly calculate the answer using the formula:

`Matches = n - 1`

So, we simply return `n - 1`.

# Logic

Initially, there are `n` teams.

- Every match eliminates exactly one team.
- The tournament ends when only one team remains.
- Therefore, the number of eliminated teams is `n - 1`.
- Since each match eliminates one team, the number of matches is also `n - 1`.

# Flow

`n teams`
→ `n - 1 teams` need to be eliminated
→ Each match eliminates `1 team`
→ Total matches = `n - 1`

For example:

`n = 7`

`7 - 1 = 6`

So, `6` matches are required.

# Algorithm

1. Take the number of teams `n`.
2. Subtract `1` from `n`.
3. Return the result.

# Why This Works

Each match produces exactly one losing team, which means exactly one team is eliminated.

Starting with `n` teams, we must eliminate teams until only one remains. This requires eliminating exactly `n - 1` teams, so exactly `n - 1` matches are needed.

# Complexity

- Time complexity: `O(1)` — Only one subtraction operation is performed.
- Space complexity: `O(1)` — No additional space is required.

# Code

```python3 []
class Solution:
    def numberOfMatches(self, n: int) -> int:
        return n - 1
```

```javascript []
var numberOfMatches = function(n) {
    return n - 1;
};
```

```typescript []
function numberOfMatches(n: number): number {
    return n - 1;
}
```

```c []
int numberOfMatches(int n) {
    return n - 1;
}
```

```cpp []
class Solution {
public:
    int numberOfMatches(int n) {
        return n - 1;
    }
};
```