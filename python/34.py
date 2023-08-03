def find_last(vin: list, target) -> int:
    i = len(vin) - 1
    while (i > -1):
        if (vin[i] == target):
            return i
        i += -1


class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        if target not in nums:
            return [-1, -1]
        if nums.count(target) < 2:
            return [nums.index(target), nums.index(target)]
        out = []
        out.append(nums.index(target))
        out.append(find_last(nums, target))
        return out
