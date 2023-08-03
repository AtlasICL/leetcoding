class Solution:
    def reverseBits(self, n: int) -> int:
        n = str(bin(n))
        return n[::-1]
    
sol = Solution()
sol.reverseBits()