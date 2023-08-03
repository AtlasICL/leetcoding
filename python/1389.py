class Solution:
    def createTargetArray(self, nums: list[int], index: list[int]) -> list[int]:
        out = []
        for i in range(0, len(nums)):
            out.insert(index[i], nums[i])
        return out