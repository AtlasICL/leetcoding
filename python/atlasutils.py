# returns Levenshtein distance between s and t
# recursive implementation, gets very slow
def LD(s: str, t: str) -> int:
    if s == "":
        return len(t)
    if t == "":
        return len(s)
    if s[-1] == t[-1]:
        cost = 0
    else:
        cost = 1
       
    res = min([LD(s[:-1], t)+1,
               LD(s, t[:-1])+1, 
               LD(s[:-1], t[:-1]) + cost])
    return res


# returns all substrings of a string s
def all_substrings(s: str) -> list[str]:
    res = [s[i: j] for i in range(len(s)) for j in range(i + 1, len(s) + 1)]
    return res


# returns value of leftmost occurrence of target, if it exists
# returns index of where it would have been otherwise
# nums input must be sorted
def binarySearch(nums: list[int], target: int) -> int:
    left = 0
    right = len(nums)
    while (left < right):
        mid = (left + right) // 2
        if (nums[mid] < target):
            left = mid + 1
        else: 
            right = mid
    return left


# returns a list of ints with digits of abs(n)
def digits_of_int(n: int) -> list[int]:
    digits = []
    for d in str(abs(n)):
        digits.append(int(d))
    return digits


# returns a list of tuples of ALL pairs in a list
def pairs_in_list(l):
    res = [(a, b) for idx, a in enumerate(l) for b in l[idx + 1:]]
    return res


# returns a list with CONSECUTIVE pairs in a list
def consecutive_doublets(l):
    return [l[i:i + 2] for i in range(len(l) - 1)]


# returns a list with CONSECUTIVE triplets in a list
def consecutive_triplets(l):
    return [l[i:i + 3] for i in range(len(l) - 2)]



