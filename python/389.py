class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ss = set(s)
        tt = set(t)
        
        print(''.join(tt.difference(ss)))

    
sol = Solution()
sol.findTheDifference("abcd", "abdce")