class Solution:
    def sortTheStudents(self, score: list[list[int]], k: int) -> list[list[int]]:
        relevant = []
        for y in range(len(score)):
            relevant.append(score[y][k])
        print(score)
        print(relevant)
        indices = [i for i in range(len(relevant))]

        dicto = {indices[i]: relevant[i] for i in range(len(relevant))}

        print(dicto)
        
        out = [0 * i for i in range(len(relevant))]
        for i in range(len(relevant)):
            print("")

        return [[]]
    
sol = Solution()
sol.sortTheStudents([[10,6,9,1],[7,5,11,2],[4,8,3,15]], 2)
