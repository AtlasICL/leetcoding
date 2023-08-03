class Solution:
    def reverseWords(self, s: str) -> str:
        list_of_words = s.split()
        output_list = []

        for word in list_of_words:
            output_list.append(word[::-1])

        output_string = " ".join(output_list)
        return output_string
