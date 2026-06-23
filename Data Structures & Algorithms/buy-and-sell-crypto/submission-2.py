class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy=101
        sell=0
        profit=0
        for p in prices:
            print(p,buy,sell,profit)
            if (p < buy):
                profit = max(profit , sell - buy)
                buy = p
                sell = p
            elif(p > sell):
                sell = p 
            
        return max(profit , sell - buy);
