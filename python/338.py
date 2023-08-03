class Solution:
    def countBits(self, n: int) -> list[int]:
        l = [str(bin(i)).count('1') for i in range(n+1)]
        return l