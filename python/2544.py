def digits_of_int(n: int) -> list[int]:
    digits = []
    for d in str(abs(n)):
        digits.append(int(d))
    return digits

class Solution:
    def alternateDigitSum(self, n: int) -> int:
        digits = digits_of_int(n)
        odds = []
        evens = []
        for i in range(len(digits)):
            if i % 2 == 0:
                evens.append(digits[i])
            else:
                odds.append(digits[i])
        
        return sum(evens) - sum(odds)