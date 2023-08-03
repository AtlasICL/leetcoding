class Solution:
    def sortSentence(self, s: str) -> str:
        list_of_words = s.split()
        indices = []
        for word in list_of_words:
            indices.append(int(word[-1]) - 1)
        
        for i in range(len(list_of_words)):
            list_of_words[i] = list_of_words[i][:-1]

        output = ["" for i in range(len(indices))]

        for i in range(len(indices)):
            output[indices[i]] = list_of_words[i]

        out = ""
        for i in range(len(indices)):
            out += output[i]
            if i != len(indices)-1:
                out += " "

        return out
