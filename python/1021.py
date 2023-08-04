class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        ss = [s[i] for i in range(len(s))]
        print(f"initial list: {''.join(ss)}")
        left = 0
        found = False
        while left < len(ss) and found == False:
            if ss[left] == '(':
                print(f"found ( at left = {left}")
                print(f"removing, before: {''.join(ss)}{len(ss)}")
                ss.pop(left)
                print(f"removing, after: {''.join(ss)}{len(ss)}")
                found = True
            left += 1

        print(f"ss after doing left: {''.join(ss)}{len(ss)}")
        
        right = len(ss)-1
        found = False
        while right >= 0 and found == False:
            if ss[right] == ')':
                print(f"found ) at right = {right}")
                print(f"removing, before: {''.join(ss)}{len(ss)}")
                ss.pop(right)
                print(f"removing, after: {''.join(ss)}{len(ss)}")
                found = True
            right -= 1

        print(f"ss after doing right: {''.join(ss)}{len(ss)}")

        print(f"returning: {''.join(ss)}")
        
        return ''.join(ss)
    
sol = Solution()
sol.removeOuterParentheses("(()())(())")