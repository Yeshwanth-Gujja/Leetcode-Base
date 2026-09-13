# Looking at the Operation Differently | LeetCode 2769

# Intuition

We need to find the maximum value of `x` that can eventually become equal to `num` using at most `t` operations.

To make `x` as large as possible, we should start with a value greater than `num`.

The key observation is that in one operation, we can:

- Decrease `x` by `1`
- Increase `num` by `1`

This reduces the difference between `x` and `num` by `2`.

Therefore, every operation allows us to start `x` exactly `2` higher while still being able to make both values equal.

# How We Derive the Approach

Suppose we start with:

`x = num`

If we want `x` to be larger than `num`, consider what happens in one operation.

| Step | x | num | Operation |
|---:|---:|---:|---|
| Start | `num + 2` | `num` | Initial values |
| 1 | `num + 1` | `num + 1` | `x - 1`, `num + 1` |

After one operation, both values become equal.

So with `t = 1`, we can make:

`x = num + 2`

Now consider two operations:

| Step | x | num | Operation |
|---:|---:|---:|---|
| Start | `num + 4` | `num` | Initial values |
| 1 | `num + 3` | `num + 1` | `x - 1`, `num + 1` |
| 2 | `num + 2` | `num + 2` | `x - 1`, `num + 1` |

After `2` operations, the values become equal.

So every operation allows us to increase the maximum possible starting value of `x` by `2`.

Therefore:

`Maximum x = num + 2 × t`

Which is the same as:

`num + t + t`

# Approach

Instead of simulating all operations, directly calculate the maximum achievable value using:

`num + t + t`

This works because every operation contributes `2` to the maximum possible value of `x`.

# Logic

Initially, the difference between `x` and `num` must eventually become `0`.

For every operation:

- `x` moves `1` closer to `num`.
- `num` moves `1` closer to `x`.

Therefore, the difference decreases by `2` per operation.

With `t` operations, the total difference that can be eliminated is:

`2 × t`

So the largest possible value of `x` is:

`num + 2 × t`

# Flow

`num`
→ Add `t`
→ Add `t` again
→ `num + 2t`
→ Maximum achievable `x`

# Algorithm

1. Take `num` and `t`.
2. Add `t` to `num`.
3. Add `t` again.
4. Return the result.

# Example / Dry Run

### Example 1

`num = 4, t = 1`

| Step | x | num | Operation |
|---:|---:|---:|---|
| Start | `6` | `4` | `x = num + 2` |
| 1 | `5` | `5` | `x - 1`, `num + 1` |

The values become equal after one operation.

**Answer = 6**

### Example 2

`num = 3, t = 2`

Maximum possible `x`:

`3 + 2 + 2 = 7`

| Step | x | num | Operation |
|---:|---:|---:|---|
| Start | `7` | `3` | Initial values |
| 1 | `6` | `4` | `x - 1`, `num + 1` |
| 2 | `5` | `5` | `x - 1`, `num + 1` |

After `2` operations, both values become equal.

**Answer = 7**

# Why This Works

Each operation decreases the difference between `x` and `num` by exactly `2`.

If we use all `t` operations, we can eliminate a difference of:

`2 × t`

To maximize `x`, we start `2t` above `num`.

Therefore:

`x = num + 2t`

So the direct calculation `num + t + t` always gives the maximum achievable value.

# Complexity

- Time complexity: `O(1)` — Only a constant number of arithmetic operations are performed.
- Space complexity: `O(1)` — No additional data structures are used.

# Code

```python3 []
class Solution:
    def theMaximumAchievableX(self, num: int, t: int) -> int:
        return num + t + t
```

```javascript []
var theMaximumAchievableX = function(num, t) {
    return num + t + t;
};
```

```typescript []
function theMaximumAchievableX(num: number, t: number): number {
    return num + t + t;
}
```

```c []
int theMaximumAchievableX(int num, int t) {
    return num + t + t;
}
```

```cpp []
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + t + t;
    }
};
```