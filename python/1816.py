class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        list_of_words = s.split()
        output = ""
        for i in range(k):
            output += list_of_words[i]
            if i != k-1:
                output += " "
        print(output)
        return output
    
sol = Solution()
sol.truncateSentence("Hello my name is slim shady", 4)