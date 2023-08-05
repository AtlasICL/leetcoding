class Solution:
    def prefixCount(self, words: list[str], pref: str) -> int:
        counter = 0
        for word in words:
            if word.find(pref) == 0:
                counter += 1
        return counter