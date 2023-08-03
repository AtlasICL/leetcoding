class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        myset = set()
        for item in nums:
            myset.add(item)
        out = list(myset)
        print(out)

sol = Solution()
sol.removeDuplicates([1, 1, 1, 2, 2, 3])