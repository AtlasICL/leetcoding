class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == "":
            return 0
        if len(s) == 2:
            if s[0] != s[1]:
                return 2
            return 1

        left = 0
        max_count = 1

        while left < len(s):

            right = left + 1
            tmp = [s[left]]
            stop = False

            while right < len(s) and stop == False:
                if s[right] not in tmp:
                    tmp.append(s[right])
                    right += 1
                else:
                    stop = True
                
                if right-left > max_count:
                        max_count = right - left
                 
            left += 1
        
        return max_count
     

