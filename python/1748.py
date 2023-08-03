class Solution:
    def sumOfUnique(self, nums: list[int]) -> int:
        uniques = set()
        for num in nums:
            if num not in uniques:
                uniques.add(num)
        return sum(uniques)

