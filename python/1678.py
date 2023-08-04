class Solution:
    def interpret(self, command: str) -> str:
        left = 0
        chars = [command[i] for i in range(len(command))]

        while left < len(chars)-1:
            if chars[left] == '(':
                if chars[left + 1] == ')':
                    chars.pop(left)
                    chars.pop(left)
                    chars.insert(left, 'o')
                else:
                    chars.pop(left)
            left += 1

        if chars[len(chars)-1] == ')':
            chars.pop(len(chars)-1)

        while ')' in chars:
            chars.remove(')')
            
        out = ''.join(chars)

        return out
    
sol = Solution()
sol.interpret("G()()()()(al)")


                
