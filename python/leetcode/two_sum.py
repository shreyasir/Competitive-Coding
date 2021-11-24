# https://leetcode.com/problems/two-sum/
from typing import List

# Solution 1


def twoSum_1(nums: list[int], target: int) -> list[int]:
    for i in range(0, len(nums)):
        for j in range(i+1, len(nums)):
            if target == nums[i]+nums[j]:
                return [i, j]
    return null

# Solution 2


def twoSum_2(nums: list[int], target: int):
    d = {}
    for i, num in enumerate(nums):
        if target-num in d:
            return [d[target-num], i]
        d[num] = i
    return [0, 0]


nums = [2, 7, 11, 15]
target = 9
result1 = twoSum_1(nums, target)
result2 = twoSum_2(nums, target)

print(result1, result2)
