class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m = max(candies)
        return list(map(lambda x:True if (x + extraCandies >= m) else False, candies))