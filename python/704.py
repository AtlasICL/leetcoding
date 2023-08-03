# returns value of leftmost occurrence of target, if it exists
# returns index of where it would have been otherwise
# nums input must be sorted
def binarySearch(nums: list[int], target: int) -> int:
    left = 0
    right = len(nums)
    while (left < right):
        mid = (left + right) // 2
        if (nums[mid] < target):
            left = mid + 1
        else: 
            right = mid
    return left

class Solution:
    def search(self, nums: list[int], target: int) -> int:
        if target not in nums:
            return -1
        l = 0
        r = len(nums)
        while (l < r):
            mid = (l + r) // 2
            if (nums[mid] < target):
                l = mid + 1
            else:
                r = mid
        return l