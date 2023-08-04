def LD(s: str, t: str) -> int:
    if s == "":
        return len(t)
    if t == "":
        return len(s)
    if s[-1] == t[-1]:
        cost = 0
    else:
        cost = 1
       
    res = min([LD(s[:-1], t)+1,
               LD(s, t[:-1])+1, 
               LD(s[:-1], t[:-1]) + cost])
    return res

class Solution:
    def minSteps(self, s: str, t: str) -> int:
        ss = sorted(set(s))
        tt = sorted(set(t))
        x = LD(str(ss), str(tt))
        print(x)
        return x
    
sol = Solution()
sol.minSteps(s = "bab", t = "aba")
    
