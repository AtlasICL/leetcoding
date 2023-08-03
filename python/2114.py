class Solution:
    def mostWordsFound(self, sentences: list[str]) -> int:
        max_words = sentences[0].count(" ") + 1

        for sentence in sentences:
            if sentence.count(" ") + 1 > max_words:
                max_words = sentence.count(" ") + 1
    
        return max_words