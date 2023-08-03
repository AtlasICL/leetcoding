class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        c = sum(nums)
        rev = nums[::-1]
        out = []
        for num in nums:
            out.append(c)
            c = c - rev[0]
            rev.pop(0)
        return out[::-1]
