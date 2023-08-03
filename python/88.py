class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        for i in range(len(nums1)-m):
            nums1.pop()
        for i in range(len(nums2)-n):
            nums2.pop()
        for i in range(len(nums2)):
            nums1.append(nums2[i])
        nums1.sort()

sol = Solution()
sol.merge([1,2,3,0,0,0], 3, [2,5,6], 3)