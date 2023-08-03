class Solution:
    def restoreString(self, s: str, indices: list[int]) -> str:
        ss = [*s]

        out = ss

        print(f"initial list ss: {ss} \n")
        print(f"initial list out: {out} \n")

        for i in range(0, len(indices)):

            out[indices[i]] = ss[i]

            print(f"i = {i}, out = {out}")

            # print(f"replacing {ss[i]} with {s[indices[i]]}")
    
        out = "".join(out)

        print(f"returning {out}")

        return out


sol = Solution()
sol.restoreString("codeleet", [4,5,6,7,0,2,1,3])