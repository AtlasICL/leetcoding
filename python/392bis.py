class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        schars = [char for char in s]
        tchars = [char for char in t]

        # print(f"schars: {schars}")
        # print(f"tchars: {tchars}")

        out = True

        for char in schars:
            if char not in tchars or schars.count(char) > tchars.count(char):
                out = False

        # print(f"after checking num of characters, out = {out}")

        if out == False:
            return False
        
        order = []
        for i in range(len(schars)):
            order.append(tchars.index(schars[i]))

        if order == sorted(order):
            return True
        return False
    
sol = Solution()
sol.isSubsequence(s = "aaaaaa", t = "bbaaaa")