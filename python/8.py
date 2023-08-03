class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()

        if (s[0] not in ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-']):
            return 0
        
        it = 0
        already = False
        while it < len(s):
            if s[it] in ['+', '-']:
                if already == False:
                    already = True
                else:
                    return 0
            if s[it].isdigit():
                break
            return 0

        negatory = False
        if s[0] == '-':
            negatory = True
            s = s[1:]

        s = ''.join(char for char in s if char.isdigit() or char == '.')
        
        digits = [s[i] for i in range(len(s))]

        sin = 0

        floaty = False
        for dig in digits:
            if dig not in ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']:
                floaty = True
                continue
            if floaty == False:
                sin = 10*sin + int(dig)
        
        if sin > 2147483648:
            if negatory:
                return -2147483648
            return 2147483648

        if negatory:
            return -sin
        return sin

        # while sin > 0:
        #     out.append(sin%10)
        #     sin = sin // 10
        # out = out[::-1]




sol = Solution()
sol.myAtoi("     47871")