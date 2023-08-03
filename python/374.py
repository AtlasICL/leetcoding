# guess API defined elsewhere
def guess(n: int) -> int:
    return 0

def binarySearch(edge1: int, edge2: int) -> int:
    left = edge1
    right = edge2
    while (left < right):
        mid = (left + right) // 2
        ret = guess(mid)
        if (ret == 0):
            return mid
        if (ret == 1):
            left = mid + 1
        else: 
            right = mid
        gap = right - left
    return binarySearch(left, right)

class Solution:
    def guessNumber(self, n: int) -> int:
        return binarySearch(0, n)