class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Step 1: Count the frequency of each number
        count = {}
        for n in nums:
            count[n] = count.get(n, 0) + 1
            
        # Step 2: Create buckets where index = frequency
        # We need len(nums) + 1 because a number could appear len(nums) times
        freq = [[] for _ in range(len(nums) + 1)]
        for n, c in count.items():
            freq[c].append(n)
            
        # Step 3: Gather the top k frequent elements
        res = []
        # Iterate backwards from the highest possible frequency
        for i in range(len(freq) - 1, 0, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res