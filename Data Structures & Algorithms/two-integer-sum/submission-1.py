class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       map = {}
       i=0;
       for n in nums:
         if n in map:
            return [map[n],i]
         map[target-n]=i
         i+=1