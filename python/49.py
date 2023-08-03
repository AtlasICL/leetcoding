class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        
        listed = [''.join(sorted(strs[i])) for i in range(len(strs))]

        uniques = set(listed)
        num_of_uniques = len(uniques)

        out = [[] for i in range(num_of_uniques)]

        uniques = list(uniques)

        for i in range(len(strs)):

            for j in range(len(uniques)):

                if set(strs[i]) == set(uniques[j]):

                    out[j].append(strs[i])
                    print(f"appending {strs[i]} to out at {j}")
        
        out.remove()
    
        


        

sol = Solution()
sol.groupAnagrams(["eat","tea","tan","ate","nat","bat"])

