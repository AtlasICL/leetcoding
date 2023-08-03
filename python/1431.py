class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        m = max(candies)
        result = []
        for kid in candies:
            result.append(kid + extraCandies >= m)
        return result
    