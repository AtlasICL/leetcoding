class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        schars = [char for char in s]
        tchars = [char for char in t]

        print(f"schars: {schars}")
        print(f"tchars: {tchars}")

        out = True

        for char in schars:
            if char not in tchars:
                out = False


        print(out)
        return out
                
        
        
sol = Solution()
sol.isSubsequence(s = "acb", t = "ahbgdc")
        
        
        
        
        
        
        
        
        
        
        
        
# i, j = 0, 0
# print(i, j)
# if s == "":
#     return True
# if t == "": 
#     return False
# while j < len(t):
#     if s[i] == t[j]:
#         i += 1
#         j += 1
#     else:
#         j += 1
# return i == len(s)
