class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        list_of_words = s.split()
        return(len(list_of_words[len(list_of_words)-1]))