def makeStringFromArray(vin: list[str]) -> str:
    out = ""
    for word in vin:
        out += word
    return out

class Solution:
    def arrayStringsAreEqual(self, word1: list[str], word2: list[str]) -> bool:
        w1 = makeStringFromArray(word1)
        w2 = makeStringFromArray(word2)
        return w1 == w2