def like_time(dishes: list[int]) -> int:
    ltc = 0
    for i in range(len(dishes)):
        ltc += dishes[i] * (i + 1)
    return ltc

class Solution:
    def maxSatisfaction(self, satisfaction: list[int]) -> int:
        max_satisfaction = 0
        satisfaction = sorted(satisfaction)
        while len(satisfaction) > 0:
            if like_time(satisfaction) > max_satisfaction:
                max_satisfaction = like_time(satisfaction)
            satisfaction.pop(0)
        return max_satisfaction


    

if __name__ == "__main__":
    sol = Solution()
    print(sol.maxSatisfaction([-1, 0, 5]))
    print(sol.maxSatisfaction([4, 3, 2]))
    print(sol.maxSatisfaction([-4, -3, -2]))
    print(sol.maxSatisfaction([0]))
    print(sol.maxSatisfaction([-1,-8,0,5,-7]))
