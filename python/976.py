def valid_triangle(a, b, c) -> bool:
    return a + b >= c and a + c >= b and c + b >= a

def consecutive_triplets(l):
    return [l[i:i + 3] for i in range(len(l) - 2)]

a = [1,2,1,10, 12]

class Solution:
    def largestPerimeter(self, nums: list[int]) -> int:
        return 0