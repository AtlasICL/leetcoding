alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

class Solution:
    def maxScoreWords(self, words: list[str], letters: list[str], score: list[int]) -> int:
        letter_points = {alphabet[i]: score[i] for i in range(len(alphabet))}
        
        best_score = 0

        for word in words:
            print("---------")
            print(f"testing for word: {word}")

            sufficient = True

            for curr_letter in alphabet:
                if letters.count(curr_letter) < word.count(curr_letter):
                   print(f"insfuccient letter = {curr_letter}")
                   print(f"count in letters list was {letters.count(curr_letter)}")
                   print(f"count in word was {word.count(curr_letter)}")
                   sufficient = False

            if sufficient:
                a = 0
                for char in word:
                    a += letter_points[char] 
                if a > best_score:
                    print(f"updating best score to {a}")
                    best_score = a

        return best_score
    


            


sol = Solution()
print(sol.maxScoreWords(["dog","cat","dad","good"], ["a","a","c","d","d","d","g","o","o"], [1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0]))