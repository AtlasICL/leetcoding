def distinct_letters(s: str) -> int:
    return len(set(s))

def all_substrings(s: str) -> list[str]:
    res = [s[i: j] for i in range(len(s)) for j in range(i + 1, len(s) + 1)]
    return res

class Solution:
    def appealSum(self, s: str) -> int:
        substrings = all_substrings(s)
        sum = 0

        for sub in substrings:
            sum += distinct_letters(sub)

        return sum
    
# this works, but exceeds memory limit on Leetcode.