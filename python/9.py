def num_is_palindrome(n) -> bool:
    if (n < 0):
        return False
    a = str(n)
    b = str(n)[::-1]
    if (a == b):
        return True
    return False


class Solution:
    def isPalindrome(self, x: int) -> bool:
        return num_is_palindrome(x)


