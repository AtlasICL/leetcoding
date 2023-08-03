class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        sin = 0
        for dig in digits:
            sin = 10*sin + dig
        sin += 1
        out = []
        while sin > 0:
            out.append(sin%10)
            sin = sin // 10
        out = out[::-1]
        return out
    

sol = Solution()
sol.plusOne([1, 2, 4, 6])