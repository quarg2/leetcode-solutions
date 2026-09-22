class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        d = {k: v for v, k in enumerate(nums)}

        for i in range(len(nums)):
            if target - nums[i] in d.keys() and i != d[target - nums[i]]:
                return [i, d[target - nums[i]]]

        return None

# Test cases
# nums: [1, 3, 8, 7], target: 10, expected output: [1, 3]
# nums: [3, 2, 4], target: 6, expected output: [1, 2]