class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s = {nums[i]:i for i in range(len(nums))}
        for i in range(len(nums)):
            second = target - nums[i]
            if(second in s) and (s[second] != i):
                return [i,s[second]]
        return [0,0]

            