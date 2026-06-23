class Solution:
    def check(self, nums: List[int]) -> bool:
        gap = False
        l =len(nums)
        for i in range(l):
            c = nums[i]
            n = nums[(i+1)%l]
            if(c>n):
                if gap:return False 
                gap=True
        return True        