def is_palindrome(sin: str) -> bool:
    srev = sin[::-1]
    return sin == srev

def nearly_palindrome(sin: str) -> bool:
    srev = sin[::-1]
    for chari in sin:
        break
    return 0

class Solution:
    def validPalindrome(self, s: str) -> bool:
        return nearly_palindrome(s)
    

