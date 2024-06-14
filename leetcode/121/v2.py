class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy, sell = prices[0], prices[0]
        profit = 0
        for i in range(1, len(prices)):
            sell = prices[i]
            if sell - buy > profit:
                profit = sell - buy
            if buy > sell:
                buy = sell
        return profit




        