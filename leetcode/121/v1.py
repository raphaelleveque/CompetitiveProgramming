from typing import List

def maxProfit(prices: List[int]) -> int:
    ans = 0
    begin = prices[0]
    end = 0
    for cur_price in prices[1:]:
        if cur_price < begin:
            begin = cur_price
            end = 0
            continue
        if cur_price > end:
            end = cur_price
        ans = max(end - begin, ans)
    return ans

print(maxProfit([2,1,2,0,1]))