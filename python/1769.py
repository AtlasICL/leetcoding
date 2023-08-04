class Solution:
    def minOperations(self, boxes: str) -> list[int]:
        ops = []
        for i in range(len(boxes)):
            counter = 0
            for j in range(len(boxes)):
                counter += int(boxes[j]) * abs(i-j)
            ops.append(counter)
        return ops

sol = Solution()
sol.minOperations("001011")