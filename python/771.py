class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        imp = set(jewels)
        counter = 0
        for jewel in jewels:
            counter += stones.count(jewel)
        return counter