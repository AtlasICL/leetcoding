from math import gcd

def good_array(nums) -> bool:
    if len(nums) == 1:
        return nums[0] == 1
    
    found = False
    nums = list(set(nums))

    pairs = [[a, b] for idx, a in enumerate(nums) for b in nums[idx + 1:]]

    for pair in pairs:
        if gcd(pair[0], pair[1]) == 1:
            found = True
            break

    return found

class Solution:
    def isGoodArray(self, nums: list[int]) -> bool:
        return good_array(nums)
    
# This works, but exceeds memory limit on LeetCode.
