def consecutive_doublets(l):
    return [l[i:i + 2] for i in range(len(l) - 1)]

class Solution:
    def maximumGap(self, nums: list[int]) -> int:
        # if len(set(nums)) == len(nums):
        #     return 0
        # if len(set(nums)) + 1 == len(nums):
        #     return max(nums) - min(nums)
        nums = sorted(nums)

        max_gap = 0
        pairs = consecutive_doublets(nums)
        for pair in pairs:
            if abs(pair[1] - pair[0]) >= max_gap:
                max_gap = abs(pair[0] - pair[1])
        return max_gap

