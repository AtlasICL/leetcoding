def range_sum(nums: list[int], left: int, right: int) -> int:
    count = 0
    for i in range(left, right):
        count += nums[i]
    return count

