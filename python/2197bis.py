from math import gcd, lcm

def consecutive_doublets(l):
    return [l[i:i + 2] for i in range(len(l) - 1)]

def coprime_list(l: list[int]) -> bool:
    pairs = consecutive_doublets(l)
    good = True
    for pair in pairs:
        if gcd(pair[0], pair[1]) != 1:
            good = False
            break
    return good

def parse(l):
    if len(l) < 2:
        return l
    p = 0
    q = 1
    while q < len(l):
        if gcd(l[p], l[q]) == 1:
            p += 1
            q += 1
        elif len(l) > 1:
            tmp = lcm(l[p], l[q])
            l.pop(q)
            l.pop(p)
            l.insert(p, tmp)
            p = 0
            q = 1
    return l

class Solution:
    def replaceNonCoprimes(self, nums: list[int]) -> list[int]:
        while coprime_list(nums) == False and len(nums) > 1:
            if len(nums) < 2:
                return nums
            nums = parse(nums)
        return nums
    
sol = Solution()
print(sol.replaceNonCoprimes([6,4,3,2,7,6,2]))

print("hello world")