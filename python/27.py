class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        k = nums.count(val)

        print(f"original list = {nums}")
        print(f"val = {val}, count = {k}")

        print("STARTING")

        for i in range(k):
            print("-------")
            print(f"looping, state = {nums}")
            nums.remove(val)
            print(f"removed, state = {nums}")

        print(f"final array: {nums}")
        print(f"final count {k}")

        return k
    
sol = Solution()
sol.removeElement([0,1,2,2,3,0,4,2], 2)