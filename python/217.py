class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        unique_values = set(nums)
        return len(unique_values) != len(nums)
    