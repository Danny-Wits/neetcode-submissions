class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minvalue = prices[0]
        profit=0
        for p in prices:
            profit = max(profit , p - minvalue)
            minvalue= min(p,minvalue)   
        return profit;
