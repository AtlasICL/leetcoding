class Solution:
    def maxArea(self, height: list[int]) -> int:
        left = 0
        curr_max = 0

        if len(height) == 2:
            return min(height)
        
        while left < len(height):

            poss = [i * min(height[i], height[left]) for i in range (1, (len(height))-left)]
            if max(poss) > curr_max:
                curr_max = max(poss)

            left += 1

        return curr_max 
    
sol = Solution()
print(sol.maxArea([1,8,6,2,5,4,8,3,7]))