def longestPalSubstr(s: str) -> int:
        n=len(s)
        def expand_center(i,j):            
            while 0<=i<=j<n and s[i]==s[j]:
                i-=1
                j+=1                
            
            return (i+1, j)                
        
        res=max([expand_center(i,i+offset) for i in range(n) for offset in range(2)], key=lambda x: x[1]-x[0]+1)
        
        return len(s[res[0]:res[1]])

def LD(s, t):
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
    def minInsertions(self, s: str) -> int:
        x = longestPalSubstr(s)
        n = len(s)
        return n-x
