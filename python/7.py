class Solution:
    def reverse(self, x: int) -> int:
        if x > 0:
            s = str(x)[::-1]
            return int(s)
        x = abs(x)
        s = "-"
        s += str(x)[::-1]
        return int(s)