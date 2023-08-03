# returns a list of ints with digits of abs(n)
def digits_of_int(n: int):
    digits = []
    for d in str(abs(n)):
        digits.append(int(d))
    return digits

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        digits = digits_of_int(n)
        s = sum(digits)
        p = 1
        for i in range(len(digits)):
            p = p * digits[i]
        return p - s