def subsequence(nums: list[int], n: int) -> int:
    counter = 0
    i = n
    while (i < len(nums) and nums[i] == 1):
        counter += 1
        i += 1
    return counter

class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        max = subsequence(nums, 0)
        i = 0
        while i < len(nums):
            tmp = subsequence(nums, i)
            if tmp > max:
                max = tmp
            if tmp > 1:
                i += tmp - 1
            else:
                i += 1
        return max
